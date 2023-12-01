#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table you want to add the key/value to
 * @key: The key
 * @value: The value associated with the key
 * Return: 1 on success, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL;
	hash_node_t *ptr = NULL;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	/* Calculate hash index for the given key */
	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];

	/* Traverse the linked list at that index */
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			free(ptr->value);
			ptr->value = strdup(value);
			return (1);
		}
		ptr = ptr->next;
	}

	/* Create new node if key not found */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	/* Assign Key and Value to the new node */
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: The hash table you want to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr = NULL;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			tmp = ptr->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
			ptr = tmp;
		}
	}
	free(ht->array);
	free(ht);
}

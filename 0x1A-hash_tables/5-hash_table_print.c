#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: The hash table you want to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *ptr = NULL;
	char *comma = "";

	if (ht == NULL)
		return;

	printf("{");
	while (index < ht->size)
	{
		ptr = ht->array[index];
		while (ptr != NULL)
		{
			printf("%s'%s': '%s'", comma, ptr->key, ptr->value);
			comma = ", ";
			ptr = ptr->next;
		}
		index++;
	}
	printf("}\n");
}

#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 * Return: NULL if something went wrong
 * Otherwise - a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/* Declaring a pointer to the hash table structure */
	hash_table_t *hash_table;

	/* Checking if the size is 0 */
	if (size == 0)
		return (NULL);

	/* Allocating memory for the hash table structure */
	hash_table = calloc(1, sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);

	/* Allocating memory for the array within the hash table */
	hash_table->array = calloc(size, sizeof(hash_node_t *));

	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	/* Setting the size of the array within the hash table */
	hash_table->size = size;

	/*Returning the pointer to the newly created hash table*/
	return (hash_table);
}

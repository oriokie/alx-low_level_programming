#include "hash_tables.h"
/**
 * key_index - returns the index of a key
 * @key: key
 * @size: size of the array of the hash table
 *
 * Description: returns the index of a key. It uses the hash_djb2 function
 * Return: index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

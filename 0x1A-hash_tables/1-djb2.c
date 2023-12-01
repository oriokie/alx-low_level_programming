#include "hash_tables.h"
/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash; /* used to store the hash value*/
	int c; /*used to store the ASCII value of characters from string*/

	hash = 5381; /* initial arbitrary hash value*/
	while ((c = *str++))
	{
		/**
		 * hash << 5 is equivalent to hash * 32
		 * + hash is equivalent to hash * 33
		 * + c - adding the ASCII value of the current character to the hash
		*/
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}

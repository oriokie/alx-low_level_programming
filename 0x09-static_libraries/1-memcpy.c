#include "main.h"
/**
 * *_memcpy - function that copies a memory area
 * @dest: the destination
 * @src: the source memory area
 * @n: the size of memory to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

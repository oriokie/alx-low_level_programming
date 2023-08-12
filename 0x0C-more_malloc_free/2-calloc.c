#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _calloc - function that allocates memory for an array. Employs the use of
 * malloc
 * @nmemb: the elements in the array
 * @size: the size of the element (each element)
 * Return: NUll if size or nmemb is zero or malloc fails return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, nmemb * size);

	return (ptr);
}

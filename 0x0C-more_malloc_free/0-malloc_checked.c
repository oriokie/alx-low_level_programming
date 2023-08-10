#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - function that allocates memory based on the variable b
 * @b: variable indicating the size of memory to be allocated
 * Return: if fail return 98, success return a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
}

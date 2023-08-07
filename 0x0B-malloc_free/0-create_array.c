#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - function that creates an array of characters and then
 * initializes it with a specific char
 * @size: this is the size (of unsigned int type)
 * @c: this is the character to be initialized
 * Return: should return NULL if the size is zero or upon failure
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;
	
	while (size != 0 & size > 0)
	{
		arr = malloc (sizeof(char) * size);
		if (arr == NULL)
		{
			return (NULL);
		}
		for (i = 0, i < size; i++)
		{
			arr[i] = c;
		}
		return (arr);
	}
	return (NULL);
}

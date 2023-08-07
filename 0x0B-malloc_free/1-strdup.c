#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * counter - prototype for the counter function not included in the header file
 * @a: pointer
 * Return: None
 */
int counter(char *a);
/**
 * _strdup - function that returns a pointer to a newly allocated space in the
 * memory. It should contain a copy of the string given as parameter
 * @str: string to be passed as parametern
 * Return: Null if the string the null also NULL if there is insufficient
 * memory
 */

char *_strdup(char *str)
{
	int i;
	char *arr;
	int size;

	if (str == NULL)
	{
		return (NULL);
	}

	size = counter(str);

	arr = malloc(sizeof(char) * (size + 1));

	if (arr != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			arr[i] = str[i];
		}
		arr[i] = '\0';
		return (arr);
	}
	else
	{
		return (NULL);
	}
}
/**
 * counter - functions that counts a string and returns the count of characters
 * @a: the string to be counted
 * Return: the count
 */
int counter(char *a)
{
	int i = 0;
	int count = 0;

	for (; a[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}

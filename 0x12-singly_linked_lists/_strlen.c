#include "lists.h"
/**
 * _strlen - The function returns the length of a string
 * @str: The string to be counted
 * Return: Length of the string
 */
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		continue;

	return (i);
}

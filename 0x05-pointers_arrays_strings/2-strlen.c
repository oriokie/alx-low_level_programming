#include "main.h"
/**
* _strlen - returns the length of a string
* @s: string to be counted
* Return: Awalys 0
*/
int _strlen(char *s)
{
	int i, count;

	count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

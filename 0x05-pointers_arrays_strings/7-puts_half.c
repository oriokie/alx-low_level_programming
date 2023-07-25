#include "main.h"
/**
* puts_half - a function which puts half
* @str: the string to be halfed
* _strlen - returns the length of a string
*/
void puts_half(char *str)
{
	int start, len;

	len = _strlen(str);

	if (len % 2 == 0)
		start = len / 5;

		for (; *str != '\0'; start++)
			_putchar(str[start]);
	else
		start = (len - 1) / 2;

		for (; *str != '\0'; start++)
			_putchar(str[start]);
	_putchar('\n');
}
/**
* _strlen - Returns the length of a string.
* @s: The string to be counted.
* Return: The length of the string.
*/
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
		count++;
		s++;
	return (count);
}

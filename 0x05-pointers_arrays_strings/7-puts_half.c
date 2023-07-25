#include "main.h"
/**
* puts_half - a function which puts half
* @str: the string to be halfed
* _strlen - returns the length of a string
*/
void puts_half(char *str)
{
	int start, count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	if (count % 2 == 0)
	{
		start = count / 2;

		for (; *str != '\0'; start++)
			_putchar(str[start]);
	}
	else
	{
		start = (count - 1) / 2;

		for (; *str != '\0'; start++)
			_putchar(str[start]);
	}
	_putchar('\n');
}

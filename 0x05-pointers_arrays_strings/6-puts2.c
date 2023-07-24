#include "main.h"
/**
 * puts2 - function that prints every char of a str
 * @str: string to be printed
 * Return: none
 */
void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\n')
		{
			_putchar('\n');
			break;
		}
		if (count % 2)
		{
			_putchar(str[count]);
			count++;
		}
	}
}


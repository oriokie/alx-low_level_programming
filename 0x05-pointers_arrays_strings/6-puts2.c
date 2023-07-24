#include "main.h"
/**
 * puts2 - function that prints every char of a str
 * @str: string to be printed
 * Return: none
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}

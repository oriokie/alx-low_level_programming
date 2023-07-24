#include "main.h"
/**
 * puts2 - function that prints every char of a str
 * @str: string to be printed
 * Return: none
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}

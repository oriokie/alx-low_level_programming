#include "main.h"
/**
* print_rev - function that prints a string, in reverse
* @s: string to be reversed
* Return: no return
*/
void print_rev(char *s)
{
	char last_char;

	while (*s != '\0')
	{
		last_char = *s;
		s++;
	}
	for (; last_char == NULL; *s--)
	{
		_putchar(*s);
	}
}

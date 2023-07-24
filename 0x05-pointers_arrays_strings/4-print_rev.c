#include "main.h"
/**
* print_rev - function that prints a string, in reverse
* @s: string to be reversed
* Return: no return
*/
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
		length++;
	for (i = length; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}

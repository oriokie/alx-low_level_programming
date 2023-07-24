#include "main.h"
/**
* print_rev - function that prints a string, in reverse
* @s: string to be reversed
* Return: no return
*/
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	for (int i = lenght - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}

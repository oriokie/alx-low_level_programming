#include "main.h"
/**
* rev_string - function that prints a string, in reverse
* @s: string to be reversed
* Return: no return
*/
void rev_string(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
		length++;
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}

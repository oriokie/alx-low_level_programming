#include "main.h"
/**
* puts_half - a function which puts half
* @str: the string to be halfed
*/
void puts_half(char *str)
{
	int start, count = 0, int i;

	while (str[count] != '\0')
	{
		count++;
	}
	char copy[count + 1];

	for (i = 0; i <= count; i++)
	{
		copy[i] = str[i];
	}
	if (count % 2 == 0)
	{
		start = count / 2;

	}
	else
	{
		start = (count - 1) / 2;

	}
	while (copy[start] != '\0')
	{
		_putchar(copy[start]);
		start++;
	}
	_putchar('\n');
}

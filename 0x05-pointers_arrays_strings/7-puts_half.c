#include "main.h"
/**
* puts_half - a function which puts half
* @str: the string to be halfed
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

	}
	else
	{
		start = (count - 1) / 2;

	}
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}

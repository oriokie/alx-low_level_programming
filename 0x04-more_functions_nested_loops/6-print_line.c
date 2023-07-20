#include "main.h"
/**
* print_line - functions that prints a line
* @n: the int describing the number of times
* Return: no return needed for the function
*/
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}

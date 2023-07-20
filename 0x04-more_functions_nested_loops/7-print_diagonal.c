#include "main.h"
/**
* print_diagonal - prints a diagonal line
* @n: the times the line is printed
* Return: there is none
*/
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	int i = 0;

	while (i < n)
	{
		int j = 0;

		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}

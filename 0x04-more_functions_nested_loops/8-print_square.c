#include "main.h"
/**
* print_square - function for printing a square
* @size: int for the size of the square
*/
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

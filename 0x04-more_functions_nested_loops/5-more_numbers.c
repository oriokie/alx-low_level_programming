#include "main.h"
/**
* more_numbers - prints 0 to 14 ten times
* Return: Always zero
*/
void more_numbers(void)
{
	int i, n;

	n = 0;
	while (n <= 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(0 + (i / 10));
			_putchar(0 + (i % 10));
			else
				_putchar(i);
		}
	_putchar('\n');
	n++;
	}
}

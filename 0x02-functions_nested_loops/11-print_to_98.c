#include "main.h"
/**
* print_to_98 - function to print natural numbers
* @n: natural number passed to the function
* Return: Always zero
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			if (n < 0)
			{
				_putchar('-');
				n = -n;
			}

			if (n >= 10)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar(n + '0');
			}

			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			if (n < 0)
			{
				_putchar('-');
				n = -n;
			}

			if (n >= 10)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar(n + '0');
			}

			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	_putchar('9');
	_putchar('8');
}

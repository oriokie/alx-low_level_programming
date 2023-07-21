#include "main.h"
/**
* print_number - Lets print integers
* @n: the integer to be input
* Return: no return
*/
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}

	_putchar('0' + (n % 10));
}

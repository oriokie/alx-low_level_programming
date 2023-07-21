#include "main.h"
/**
* print_number - Lets print integers
* @n: the integer to be input
* Return: no return
*/
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}

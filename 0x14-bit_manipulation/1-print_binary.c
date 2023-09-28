#include "main.h"
/**
 * print_binary - function that prints binary numbers
 * @n: integer to be printed in binary
 *
 * Return: binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar((n & 1) ? '1' : '0');
}

#include "main.h"
/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: zero for success
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned int count = 0;

	/* Perform a bitwise XOR operation between n and m */
	/* Sets different bits to 1 and same to 0 */
	x = n ^ m;

	while (x > 0)
	{
		if ((x & 1) == 1)
		{
			count++;
		}
		x >>= 1;
	}
	return (count);
}

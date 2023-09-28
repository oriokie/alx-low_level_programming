#include "main.h"
/**
 * clear_bit - function that sets the value of abit to 0 at a given index
 * @index: the index of the bit you want to set
 * @n: the decimal number
 * Return: -1 for failure; 1 for success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	bit = 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	bit <<= index;
	*n &= ~bit;

	return (1);
}

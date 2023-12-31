#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @index: index of the bit we want to get
 * @n: the value2-main.c
 *
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/** check if index is out of bounds */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	/* shifts the bits of n to the right by index positions */
	n >>= index;

	/* performs bitwise AND operation if 1 -1 return 1 if 0 - 1; 0 */
	return (n & 1);
}

#include "main.h"
/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @index: index of a bit you want to set
 * @n: pointer to the decimal value
 *
 * Return: -1 for error; and 1 for success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/** check if index is within the range for valid bit indeces */
	if (index  >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/* Lets move the bit to the left as per the index value */
	/* use OR to combine the numbers */

	*n |= 1 << index;

	return (1);
}

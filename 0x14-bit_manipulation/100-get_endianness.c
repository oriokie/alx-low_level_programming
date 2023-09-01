#include "main.h"
/**
 * get_endianness - function that checks for the endianness of a computer sys
 * endianness refers to the order in which bytes are stored in memomry
 * in big endian sys the MSB is stored at the lowest memory address
 * in little-endian the least significant byte is stored
 *
 * Return: 0 for big-endian and 1 for little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;

	char *c;

	c = (char *) &x;

	return ((int) *c);
}

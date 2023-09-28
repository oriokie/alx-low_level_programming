#include "main.h"
/**
 * char_to_int - function that convers a char to an int
 * @c: the character
 * Return: the int
 */
unsigned int char_to_int(char c)
{
	return (c - '0');
}
/**
 * binary_to_uint - function that converts a binary number to unsigned int
 * @b: pointer to the binary string
 *
 * Return: unsigned int or 0 if the string has other char that are not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;
	int len = 0;

	if (b == NULL)
		return (0);

	len = strlen(b);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result += ((char_to_int(b[i])) * (1 << (len - 1 - i)));
		i++;
	}
	return (result);
}


#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase
 *              followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit;

	/* Print numbers from 0 to 9 */
	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}

	/* Print lowercase letters from a to f */
	for (digit = 'a'; digit <= 'f'; digit++)
	{
		putchar(digit);
	}

	/* Print a new line */
	putchar('\n');

	return (0);
}


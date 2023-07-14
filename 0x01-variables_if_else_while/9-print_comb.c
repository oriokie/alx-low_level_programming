#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 *              separated by commas and spaces, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (char digit = '0'; digit <= '9'; digit++)
	{
		putchar(',');
		putchar(' ');
		putchar(digit);
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers,
 *              ranging from 0 to 99, in ascending order. The combinations
 *              are separated by a comma and no space. Each number is printed
 *              with two digits. For example, 1 is printed as 01.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			if (num1 != num2)
			{
				putchar((num1 / 10) + '0');
				putchar((num1 % 10) + '0');
				putchar(',');
				putchar((num2 / 10) + '0');
				putchar((num2 % 10) + '0');

				if (num1 != 98 || num2 != 99)
					putchar(',');
			}
		}
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int prev = 1;
	unsigned long int curr = 2;
	unsigned long int next;
	int count = 2;

	printf("%lu, %lu", prev, curr);

	while (count < 98)
	{
		next = prev + curr;
		printf(", %lu", next);

		prev = curr;
		curr = next;
		count++;
	}

	printf("\n");

	return (0);
}


#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long prev = 1;
	unsigned long curr = 2;
	unsigned long next;
	int count;

	printf("%lu, %lu", prev, curr);

	for (count = 3; count <= 98; count++)
	{
		next = prev + curr;
		printf(", %lu", next);
		prev = curr;
		curr = next;
	}

	printf("\n");
	return (0);
}


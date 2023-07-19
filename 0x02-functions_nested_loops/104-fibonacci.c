#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long long int prev = 1;
	unsigned long long int curr = 2;
	unsigned long long int next;
	int count;

	printf("%llu, %llu", prev, curr);

	for (count = 3; count <= 98; count++)
	{
		next = prev + curr;
		printf(", %llu", next);
		prev = curr;
		curr = next;
	}

	printf("\n");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - This is the entry point for the function that multiplies two numbers
 * @argc: count of the parameters
 * @argv: the parameters
 * Return: zero for success and one for error
 */
int main(int argc, char **argv)
{
	int a, b, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);

		b = atoi(argv[2]);

		result = a * b;

		printf("%d\n", result);

		return (0);
	}
}

#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Main Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of pointers to the arguments
 * Return: 0 on success, 98 for incorrect number of arguments,
 *         99 for invalid operator, and appropriate result for calculation.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;
	int (*operation)(int, int);

	if (argc != 4)
	{
		return (98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	operation = get_op_func(operator);

	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if (( operator == '/' || operator '%') && operator == 0)
	{
		print("Error\n");
		exit(100);
	}

	printf("%d\n", operation(num1, num2));

	return (0);
}

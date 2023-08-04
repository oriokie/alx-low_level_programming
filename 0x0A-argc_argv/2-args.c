#include <stdio.h>

/**
 * print_arguments - Recursive function to print the elements of argv.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to strings containing the arguments.
 * @index: The index of the current argument to print.
 *
 * Return: void
 */
void print_arguments(int argc, char **argv, int index)
{
	if (index == argc)
		return;
	printf("%s\n", argv[index]);
	print_arguments(argc, argv, index + 1);
}

/**
 * main - Entry point.
 *
 * @argc: Counts the number of parameters that go into main.
 * @argv: Pointer of array of pointers containing strings entering main.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		print_arguments(argc, argv, 0);
	return (0);
}

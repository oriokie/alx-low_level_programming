#include <stdio.h>
/**
 * main - Entry point to a program that prints the number of arguments passed
 * into it
 * @argc: the number of arguments
 * @argv: the pointer containing the arguments entered
 * Return: Awalys 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

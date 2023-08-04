#include <stdio.h>

/**
 * main - program that counts its name followed bya new line
 *
 * @argc: Counts the number of parameters entered into the command line
 * @argv:Array
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}

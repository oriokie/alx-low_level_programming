#include "main.h"
/**
 * print_error - function for exiting with a code
 * @message: the formatted string to be passed
 * @exit_code: the exit code
 * Return: 0
 */
void print_error(const char *message, int exit_code)
{
	fprintf(stderr, "%s\n", message);
	exit(exit_code);
}
/**
 * main - this is the main function
 * @argc: count of arguments
 * @argv: the arguments
 *
 * Return: none
 */
int main(int argc, char *argv[])
{
	const char *elf_filename;
	int fd;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	elf_filename = argv[1];

	fd = open(elf_filename, O_RDONLY);

	if (fd == -1)
	{
		print_error("Failed to open ELF file", 98);
	}
	return (0);
}

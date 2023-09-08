#include "main"
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
		print_error("Failed to open ELF file");
	}
	return (0);
}

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
	char buf[BUFF_SIZE];
	int fd, i;
	Elf64_Ehdr *elf_header = (Elf64_Ehdr *)buf;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}
	elf_filename = argv[1];
	fd = open(elf_filename, O_RDONLY);

	if (fd == -1)
		print_error("Failed to open ELF file", 98);
	if (lseek(fd, 0, SEEK_SET) == -1)
		print_error("Error using lseek", 98);
	if (memcmp(elf_header->e_ident, ELFMAG, SELFMAG) != 0)
		print_error("Not a valid Elf File", 98);
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; ++i)
		printf("%02x ", elf_header->e_ident[i]);
	printf("\n");
	printf("  Class:                             %s\n",
					elf_header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n",
		elf_header->e_ident[EI_DATA] == ELFDATA2LSB ?
		"2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n",
		elf_header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n",
		elf_header->e_ident[EI_OSABI] == ELFOSABI_SYSV ?
		"UNIX - System V" : "UNIX - NetBSD");
	printf("  ABI Version:                       %d\n",
		elf_header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %d\n", elf_header->e_type);
	printf("  Entry point address:               %lx\n", elf_header->e_entry);
	close(fd);
	return (0);
}

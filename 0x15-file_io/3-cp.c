#include "main.h"
/**
 * error_exit - function for exiting with a code
 * @code: code for exiting
 * @format: the formatted string to be passed
 * @arg: other argnuments to be passed
 *
 * Return: None
 */
void error_exit(int code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(code);
}
/**
 * copy_file - function that copies a file and then appends to another file
 * @source_file: file to be copied
 * @dest_file: file content to be appended
 *
 * Return: 0 for success
 */
int copy_file(const char *source_file, const char *dest_file)
{
	int file_from, file_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFF_SIZE];


	file_from = open(source_file, O_RDONLY);

	if (file_from == -1)
	{
		error_exit(98, "Error: Can't read from the file %s\n", source_file);
	}

	file_to = open(dest_file, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (file_to == -1)
	{
		error_exit(99, "Error: Can't write to %s\n", dest_file);
	}

	while ((bytes_read = read(file_from, buffer, BUFF_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			error_exit(99, "Error: Can't write to %s\n", dest_file);
		}
	}
	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file %s\n", source_file);
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

	return (0);
}
/**
 * main - this is the main function
 * @argc: count of arguments
 * @argv: arguments to be passed
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	const char *source_file;
	const char *destination_file;


	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	source_file = argv[1];
	destination_file = argv[2];


	copy_file(source_file, destination_file);
	return (0);
}

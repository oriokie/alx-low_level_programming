#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to be read
 * @letters: number of characters to read and print
 * Return: number of bytes successfully written to standard output
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int open_file;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL) /* Checking if the filename is null */
		return (0);

	buffer = malloc(sizeof(char) * letters); /* Allocating memomry */
	if (buffer == NULL)
		return (0);

	open_file = open(filename, O_RDONLY); /* Opening the file */
	if (open_file == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(open_file, buffer, letters); /* Reading the file */
	if (bytes_read == -1)
	{
		free(buffer);
		close(open_file);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read); /* Write to STDOUT*/
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(open_file);
		return (0);
	}

	/* Free buffer and close file descriptor */
	free(buffer);
	close(open_file);
	return (bytes_written);
}

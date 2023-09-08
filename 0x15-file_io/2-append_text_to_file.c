#include "main.h"
/**
 * append_text_to_file - the function appends text at the end of the file
 * Do not create a file if it does not exist
 * If filename is NULL return -1
 * @filename: the filename
 * @text_content: - text to be added at the end of the file
 *
 * Return: 1 on success, and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_file, bytes_written;

	if (filename == NULL)
		return (-1);

	open_file = open(filename, O_APPEND | O_WRONLY);

	if (open_file == -1)
		return (-1);

	if (text_content)
	{
		bytes_written = write(open_file, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(open_file);
			return (-1);
		}
	}
	close(open_file);

	return ((text_content && bytes_written > 0) ? 1 : -1);
}

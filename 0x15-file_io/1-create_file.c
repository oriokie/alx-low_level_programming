#include "main.h"
/**
 * create_file - function that creates a file
 * the created file must have the permissions rw-------
 * if files exists the permissions should not be changed
 * if file exists truncate it
 * @filename: name of the file to be created
 * @text_content: is NULL terminated string to write to the file
 *
 * Return: 1 on succcess and -1 on failure (file cant not be created
 * or written)
 * also return -1 if filename is NULL; if text_content is NULL create an
 * empty file
 */
int create_file(const char *filename, char *text_content)
{
	int open_file, written_bytes;

	if (filename == NULL)
		return (-1);

	/**
	 * open file and flag it to write to the file, create it if  doesn't exist
	 * truncate it if it does
	 */
	open_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (open_file == -1)
		return (-1);

	if (text_content)
	{
		written_bytes = write(open_file, text_content, strlen(text_content));

		if (written_bytes == -1)
		{
			close(open_file);
			return (-1);
		}
	}
	close(open_file);

	return ((text_content && written_bytes > 0) ? 1 : -1);
}

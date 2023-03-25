#include "main.h"

/**
 * create_file - Function to create file
 * @filename: Name of the file
 * @text_content: A NULL to be written to file
 * Return: 1 for success, otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int f_open, len = 0;
	ssize_t f_write;

	if (filename == NULL)
		return (-1);
	f_open = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f_open == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (*(text_content + len))
			len++;
		f_write = write(f_open, text_content, len);
		if (f_write == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(f_open);
	return (1);
}

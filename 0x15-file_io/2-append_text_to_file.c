#include "main.h"

/**
 * append_text_to_file - Function to add text to end of file
 * @filename: File name
 * @text_content: Text to modify
 * Return: 1 for success, otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0, f_open, f_write;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		f_open = open(filename, O_WRONLY | O_APPEND);
		if (f_open == -1)
			return (-1);
		while (*(text_content + len))
			len++;
		f_write = write(f_open, text_content, len);
		if (f_write == -1)
		{
			close(f_open);
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}
	close(f_open);
	return (1);
}

#include "main.h"

/**
 * read_textfile - Function that reads a text file
 * @filename: Pointer to file location
 * @letters: No of letters
 * Return: Number
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ltrs = malloc(sizeof(char) * letters);
	int f_open, f_read, f_write;

	if (filename == NULL)
		return (0);
	f_open = open(filename, O_RDONLY);
	if ((f_open == -1) || (ltrs == NULL))
		return (0);
	f_read = read(f_open, ltrs, letters);
	if (f_read == -1)
	{
		free(ltrs);
		return (0);
	}
	f_write = write(STDOUT_FILENO, ltrs, f_read);
	if (f_write == -1)
	{
		free(ltrs);
		return (0);
	}
	free(ltrs);
	close(f_open);
	return (f_write);
}

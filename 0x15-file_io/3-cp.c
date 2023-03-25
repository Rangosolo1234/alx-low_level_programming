#include "main.h"
/**
 * error_type - Function to state error type
 * @file1: File to copy from
 * @file2: File to copy to
 * @av: Argument vector
 */
void error_type(int file1, int file2, char *av[])
{
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]);
		exit(99);
	}
}
/**
 * main - Program o copy file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t val, num;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_type(file_from, file_to, argv);

	val = 1024;
	while (val == 1024)
	{
		val = read(file_from, buf, 1024);
		if (val == -1)
			error_type(-1, 0, argv);
		num = write(file_to, buf, val);
		if (num == -1)
			error_type(0, -1, argv);
	}

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

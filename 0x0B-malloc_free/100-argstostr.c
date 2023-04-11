#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Function adds
 *
 * @ac: Argument count
 * @av: Argument vector
 * Return: Pointer to new string, otherwise NULL
 */

char *argstostr(int ac, char **av)
{
	char *str_copy;
	int idx, idx2, count = 0, size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (idx = 0; idx < ac; idx++)
	{
		for (idx2 = 0; av[idx][idx2]; idx2++)
			size++;
		size++;
	}
	size++;

	str_copy = malloc(sizeof(char) * size);
	if (str_copy == NULL)
		return (NULL);
	for (idx = 0; idx < ac; idx++)
	{
		for (idx2 = 0; av[idx][idx2]; idx2++)
		{
			str_copy[count] = av[idx][idx2];
			count++;
		}
		str_copy[count] = '\n';
		count++;
	}
	return (str_copy);
}

#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function that returns a pointer
 * a newly allocated space in memory which contains
 * a copy of the string
 *
 * @str: Points to string
 * Return: Pointer to the duplicated string, otherwise NULL
 */

char *_strdup(char *str)
{
	char *str_copy;
	unsigned int i, str_len = 0;

	if (str == NULL)
		return (NULL);

	while (str[str_len])
		str_len++;
	str_len++;

	str_copy = malloc(sizeof(char) * str_len);
	if (str_copy == NULL)
		return (NULL);
	for (i = 0; i < str_len; i++)
		str_copy[i] = str[i];
	str_copy[i] = '\0';
	return (str_copy);
}

#include "main.h"
/**
 * _strlen - change initials
 * @s: string to change
 * Return: len
 */
int _strlen(char *s)
{
int i;

i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}

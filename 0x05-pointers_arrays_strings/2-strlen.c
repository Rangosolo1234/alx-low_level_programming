#include "main.h"
/**
 * _strlen - change initials
 * @s: string to change
 * Return: len
 */
int _strlen(char *s)
{
int len;

while (*s != '\0')
{
len = len + 1;
s = s + 1;
}
return (len);
}

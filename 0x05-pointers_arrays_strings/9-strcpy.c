#include "main.h"

/**
 * _strcpy - copy pointer to variable
 * @src: origin
 * @dest: destiny
 * Return: d .
 */

char *_strcpy(char *dest, char *src)
{
char *d = dest;

for (; *src != '\0'; src++)
{
*dest = *src;
dest++;
}
*dest = *src;
return (d);
}

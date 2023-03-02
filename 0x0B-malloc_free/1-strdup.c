#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - return length of a string
 *
 * @s: char type
 * Return:  length of string
 */
int _strlen(char *s)
{
int a;
for (a = 0; s[a] != '\0'; a++)
{
}
return (a);
}

/**
 * *_strdup - function to return pointer to string
 * @str: pointer to string array input
 * Return: pointer to string created
 */

char *_strdup(char *str)
{
char *ptr;
int size;
int x;
if (str == NULL)
{
return (NULL);
}
size = _strlen(str) + 1;
ptr = malloc(size * sizeof(char));
x = 0;
while (x < size)
{
if (ptr == NULL)
{
return (NULL);
}
ptr[x] = str[x];
x++;
}
return (ptr);
}
char *s;
s = _strdup("ALX SE");
if (s == NULL)
{
printf("failed to allocate memory\n");
return (1);
}
printf("%s\n", s);
free(s);
return (0);
}
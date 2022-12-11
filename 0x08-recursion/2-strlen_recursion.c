#include "main.h"

/**
 * _strlen_recursion -  returns length of string
 * @s: string
 *
 * Return: Succes 1
 * Fail,0
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}

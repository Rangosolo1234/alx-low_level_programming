#include "main.h"

/**
 * _puts_recursion - prints string followed by new line
 * @s: string
 *
 * Return: on succes 1
 * On error, -1 returned
 */
void _puts_recursion(char *s)
{
if (*s == 0)
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}

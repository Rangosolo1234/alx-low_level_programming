#include "main.h"
/**
 * _puts - function prints string followed by new line
 * @str: pointer to char
 * Return: Always 0 (success)
 */
void _puts(char *str)
{
for (; *str != '\0';)
{
_putchar(*str);
str++;
}
_putchar('\n');
}

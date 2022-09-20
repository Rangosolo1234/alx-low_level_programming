#include "main.h"
/**
 * puts2 - prints only even no
 * @str: input
 * Return: Always 0
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != 0)
{
if ((i % 2) == 0)
_putchar(str[i]);
i++;
}
_putchar('\n');
}

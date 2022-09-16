#include "main.h"

/**
 * print_numbers - prints 0-9
 *
 * Return: 0-9 followed by new line
 */
void print_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)
_putchar(i + '0');
_putchar('\n');
}

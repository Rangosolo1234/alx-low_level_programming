#include "main.h"

/**
 * _pow_recursion - raises x to power y
 * @x: base number
 * @y: power
 *
 * Return: 1 on success
 * Fail, -1
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y -1));
}

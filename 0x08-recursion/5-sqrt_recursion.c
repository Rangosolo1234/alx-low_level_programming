#include "main.h"

/**
 * sqrt2 - makes evaluation possible
 * @a: same number as n
 * @b: itteration no
 *
 * Return: 1 on succes
 * On error, -1
 */
int sqrt2(int a, int b)
{
if (b * b == a)
return (b);
else if (b * b > a)
return (-1);
return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: integer
 *
 * Return: 1 on success
 * On error, -1
 */
int _sqrt_recursion(int n)
{
return (sqrt2(n, 1));
}

#include "main.h"

/**
 * largest_number - returns largest
 * @a: first integer
 * @b: second
 * @c: third int
 * Return: largest int
 */

int largest_number(int a, int b, int c)
{
int largest;

if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
}

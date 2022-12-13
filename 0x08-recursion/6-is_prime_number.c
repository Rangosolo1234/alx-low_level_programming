#include "main.h"

/**
 * prime2 - Makes it possible to evaluate 1 to n
 * @a: same number as n
 * @b: iteration number
 *
 * Return: On success 1
 * On error, -1
 */
int prime2(int a, int b)
{
if (a == b)
return (1);
else if (a % b == 0)
return (0);
return (prime2(a, b + 1);
}
/**
 * is_prime_number - checks number
 * @n: Number integer
 *
 * Return: On success 1
 * On error -1
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime2(n, 2);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * greater than 0:positive, if 0: zero
 * less than 0: bnegative, followed by new line.
 * Return: 0
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
return (0);
}

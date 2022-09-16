#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints numbers
 * 3 multiples print fizz buzz instead of numbers
 * 5 multiples fizz buss instead of numbers
 * 3 & 5 instead of numbers
 * Return: Always 0 success
 */
int main(void)
{
int i;
char f[] = "Fizz";
char b[] = "Buzz";
char fb[] = "FizzBuzz";

for (i = 1; i <= 100; i++)
{
if (i == 100)
printf("%s", b);
else if ((i % 3 == 0) && (i % 5 == 0))
printf("%s", fb);
else if(i % 3 == 0)
printf("%s", f);
else if (i % 5 == 0)
printf("%s", b);
else
printf("%s", i);
}
printf("\n");
return (0);
}

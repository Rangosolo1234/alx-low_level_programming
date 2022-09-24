#include "main.h"

/**
 * _strcmp - compares
 * @s1 - first
 * @s2: - Second
 *
 * Return: Comparison
 */
int _strcmp(char *s1, char *s2)
{
int a = 0, b = 0, c = 0, r = 0, lim;

while (s1[a])
{
a++;
}

while (s2[b])
{
b++;
}

if (a <= b)
{
lim = 'a';
}
else
{
lim = b;
}

while (c <= lim)
{
if (s1[c] == s2[c])
{
c++;
comtinue;
}
else
{
r = s1[c] - s2[c];
break;
}

c++;
}

return (r);
}

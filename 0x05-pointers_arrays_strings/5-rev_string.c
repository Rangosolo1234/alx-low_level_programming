#include "main.h"
/**
 * rev_string - character in reverse
 * @s: input to be changed
 */
void rev_string(char *s)
{
int ini = 0, finish = 0;
char t;

while (s[finish] != 0)
finish++;
finish--;

while (ini < finish)
{
t = s[ini];
s[ini] = s[finish];
s[finish] = t;
ini++;
finish--;
}
}

#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Function to print name
 *
 * @name: Pointer to a character
 * @f: Pointer to a function f
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL && name)
		f(name);
}

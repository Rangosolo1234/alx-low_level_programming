#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments passed to main
 * @argc: Number of command line arguments
 * @argv: Array name
 *
 * Return: Always 0 (Successful)
 */

int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc -1);
return (0);
}

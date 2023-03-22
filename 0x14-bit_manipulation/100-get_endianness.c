#include "main.h"

/**
 * get_endianness - Function
 * Return: 0 for big endian, 1 for little endian
 */

int get_endianness(void)
{
        int col = 1;
        char *end = (char *) &col;

        if (*end == 1)
                return (1);
        return (0);
}

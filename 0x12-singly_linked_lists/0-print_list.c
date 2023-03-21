#include "lists.h"

/**
 * print_list - prints all the elements of list_t list.
 * @h: pointer to list_t
 * Return: number of lists.
 **/
size_t print_list(const list_t *h)
{
size_t cont = 0;
while (h)
{
if (h->str)
printf("[%u] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");
cont++;
h = h->next;
}
return (cont);
}

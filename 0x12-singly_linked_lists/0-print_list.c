#include "lists.h"

/**
 * print_list - Function that prints all elements of  list_t
 * @h: A singly linked list
 * Return: Integer number of nodes
 */

size_t print_list(const list_t *h)
{
	int coun;

	for (coun = 0; h != NULL; coun++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			coun++;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (coun);
}

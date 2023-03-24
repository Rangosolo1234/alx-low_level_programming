#include "lists.h"

/**
 * print_list - Function to print elements of a lis
 * @h: sinly liked list
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	int num;

	for (num = 0; h != NULL; num++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			num++;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (num);
}

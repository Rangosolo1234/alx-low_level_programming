#include "lists.h"

/**
 * print_listint - Function to print listr
 * @h: Pointer node
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count;

	for (count = 0; h; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}

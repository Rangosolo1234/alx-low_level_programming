#include "lists.h"

/**
 * print_dlistint - Prints all elements of dlistint_t list
 * @h: Pointer to head of the list
 * Return: Number of nodes in the list
 **/

size_t print_dlistint(const dlistint_t *h)
{
	size_t size;

	size = 0;
	if (h == NULL)
		return (size);

	while (h)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}
	return (size);
}

#include "lists.h"

/**
 * dlistint_len - counts and returns no of elements
 * @h: pointer to head of the list
 * Return: number of nodes in the list
 **/
size_t dlistint_len(const dlistint_t *h)
{
	size_t size;

	size = 0;
	if (h == NULL)
	return (size);

	while (h)
	{
	size++;
	h = h->next;
	}
	return (size);
}

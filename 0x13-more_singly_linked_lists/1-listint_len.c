#include "lists.h"

/**
 * listint_len - Function for linked list
 * @h: Pointer
 * Return: Number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	int cnt;

	for (cnt = 0; h; cnt++)
		h = h->next;
	return (cnt);
}

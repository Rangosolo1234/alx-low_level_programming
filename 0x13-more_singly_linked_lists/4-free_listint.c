#include "lists.h"

/**
 * free_listint - Function that frees a list
 * @head: Pointer to first node
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *list_ptr;

	while (head)
	{
		list_ptr = head;
		head = head->next;
		free(list_ptr);
	}
}

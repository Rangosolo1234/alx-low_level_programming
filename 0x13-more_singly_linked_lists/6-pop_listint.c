#include "lists.h"

/**
 * pop_listint - Function that deletes head node
 *
 * @head: Pointer of a pointer to the first list element
 * Return: Head node's data or NULL
 */

int pop_listint(listint_t **head)
{
	listint_t *new_head = *head;
	int ret = 0;

	if (*head == NULL)
		return (ret);
	ret = (*head)->n;
	*head = new_head->next;
	free(new_head);
	return (ret);
}

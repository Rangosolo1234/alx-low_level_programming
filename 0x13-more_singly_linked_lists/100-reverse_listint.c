#include "lists.h"

/**
 * reverse_listint - Function that reverses order of listint_t
 * @head: Pointer to a pointe
 * Return: Pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node = NULL, *current_node = NULL;

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = current_node;
		current_node = *head;
		*head = next_node;
	}
	*head = current_node;
	return (*head);
}

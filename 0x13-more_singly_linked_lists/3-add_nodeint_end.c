#include "lists.h"

/**
 * add_nodeint_end - Function that adds node at end
 * @head: Pointer
 * @n: Number of new nodes to be added
 * Return: Address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t)), *last_node = *head;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (last_node->next)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (*head);
}

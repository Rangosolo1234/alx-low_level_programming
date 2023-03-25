#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts a new node
 * at a given position
 *
 * @head: Pointer to pointer of first node
 * @idx: Index
 * @n: Number to be placed
 * Return: Address of new node NULL if non
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t)), *temp = *head;
	unsigned int count = 0;

	if (new_node == NULL)
		return (free(new_node), NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL && idx > 0)
	{
		free(new_node);
		return (NULL);
	}

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (count < idx - 1)
	{
		temp = temp->next;
		if (temp == NULL && (idx - count) > 0)
		{
			free(new_node);
			return (NULL);
		}
		count++;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}

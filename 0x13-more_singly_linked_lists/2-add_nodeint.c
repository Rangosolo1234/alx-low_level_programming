#include "lists.h"

/**
 * add_nodeint - Function to add node to linked list
 * @head: Pointer to the start point of linked list
 * @n: Number of elements to be added
 * Return: Address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}

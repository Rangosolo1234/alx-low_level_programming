#include "lists.h"

/**
 * free_listint2 - Function to frees listint_t list
 * @head: Pointer to pointer
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *list_ptr;

	if (head)
	{
		while (*head)
		{
			list_ptr = *head;
			*head = list_ptr->next;
			free(list_ptr);
		}
	}
}

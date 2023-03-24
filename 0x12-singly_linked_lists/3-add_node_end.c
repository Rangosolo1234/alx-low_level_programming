#include "lists.h"

/**
 * _strlen - Funstion to find length of a string
 * @str: String to count length
 * Return: Integer value for length of string
 */
int _strlen(const char *str)
{
	int cnt = 0;

	while (str[cnt])
		cnt++;
	return (cnt);
}

/**
 * add_node_end - Function that adds a new node at the end of a list_t list
 * @head: Pointer to the first element
 * @str: String to be duplicated
 * Return: Address of the new element, otherwise NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *first, *last;

	first = malloc(sizeof(list_t));
	if (first == NULL)
		return (NULL);
	first->str = strdup(str);
	first->len = _strlen(str);
	first->next = NULL;

	if (*head == NULL)
		*head = first;
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = first;
	}
	return (first);
}

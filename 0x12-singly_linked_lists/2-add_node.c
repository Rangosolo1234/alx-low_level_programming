#include "lists.h"

/**
 * _strlen - Function to find the length of a string
 * @str: String whose length is not known
 * Return: length of string
 */
int _strlen(const char *str)
{
	int cnt = 0;

	while (str[cnt])
		cnt++;
	return (cnt);
}

/**
 * add_node - Function that adds a new node at the beginning of a list_t list
 * @head: Pointer to first list element
 * @str: String
 * Return: Address of the new element, otherwise NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *val;

	val = malloc(sizeof(list_t));
	if (val == NULL)
	{
		return (NULL);
	}
	val->next = *head;
	val->str = strdup(str);
	val->len = _strlen(str);

	*head = val;
	return (*head);

}

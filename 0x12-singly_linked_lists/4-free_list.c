#include "lists.h"

/**
 * free_list - Function that frees a list_t list
 * @head: Pointer to first list element
 * Return: Nothing
 */

void free_list(list_t *head)
{
list_t *sol;
while (head)
{
sol = head;
free(sol->str);
head = head->next;
free(sol);
}
}

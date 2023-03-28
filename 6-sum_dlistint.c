#include "lists.h"

/**
 * sum_dlistint - returns the addition of all the data  of a dlistint_t list
 * @head: pointer to head
 * Return: sum or 0
 **/
int sum_dlistint(dlistint_t *head)
{
	long int sum;
	dlistint_t *tmp;

	sum = 0;
	if (head == NULL)
	return (sum);

	tmp = head;
	while (tmp)
	{
	sum += tmp->n;
	tmp = tmp->next;
	}
	return (sum);
}

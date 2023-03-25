#include "lists.h"

/**
 * find_listint_loop - Function loop of linked list
 * @head: Pointer to first node
 * Return: Address of the node where the loop begins
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s_ptr = head, *f_ptr = head;

	if (head == NULL)
		return (NULL);

	while (s_ptr && f_ptr && f_ptr->next)
	{
		s_ptr = s_ptr->next;
		f_ptr = f_ptr->next->next;

		if (s_ptr == f_ptr)
		{
			s_ptr = head;
			while (s_ptr != f_ptr)
			{
				s_ptr = s_ptr->next;
				f_ptr = f_ptr->next;
			}
			return (f_ptr);
		}
	}

	return (NULL);
}

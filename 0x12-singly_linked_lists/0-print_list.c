/*
 * File: 0-print_list.c
 * Auth: Solomon Kipkirui
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_list - print elements of a list
 * @h: Ponter variable to list_t
 *
 * Return: Number of nodes in h
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h);
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		count++;
		h->next;
	}
	return (count);
}


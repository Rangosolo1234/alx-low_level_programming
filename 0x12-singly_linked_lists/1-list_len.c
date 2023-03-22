/*
 * File: 1-list_len.c
 * Auth: Solomon kipkirui
 */

#include "lists.h"

/**
 * list_len - Function that returns the number of elements
 * of a linked list
 * @h: A singly linked list
 * Return: Number of elements in a list
 */

size_t list_len(const list_t *h)
{
	int conti;

	for (conti = 0; h != NULL; conti++)
		h = h->next;
	return (conti);
}

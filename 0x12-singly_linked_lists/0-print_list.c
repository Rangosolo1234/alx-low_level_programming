/*
 * File: 0-print_list.c
 * Auth: Solomon Kipkirui
 */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print list of elements
 * @h: list_t
 *
 * Return: Always 0.
 */
size_t print_list(const list_t *h);
{
    list_t *head;
    list_t *new;
    list_t hello = {"World!", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Namastei");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}

#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of listsnt_t
 * @h : head of linked list
 *
 * Return: The number of nodes in linked lists
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)

	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}


#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a linked list
 * @h: Pointer to a pointer to the head of the list
 *
 * Return: Size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *temp;

	current = *h;

	while (current != NULL && current > current->next)
	{
		temp = current->next;
		free(current);
		current = temp;
		++count;
	}

	if (current != NULL)
	{
		free(current);
		++count;
	}

	*h = NULL;

	return (count);
}


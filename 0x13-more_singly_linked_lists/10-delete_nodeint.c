#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a specific index in the list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if successful, -1 on failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = *head, *previous = NULL;

	if (current == NULL)
	return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (current)
	{
		if (count == index)
		{
			previous->next = current->next;
			free(current);
			return (1);
		}

		previous = current;
		current = current->next;
		count++;
	}

	return (-1);
}

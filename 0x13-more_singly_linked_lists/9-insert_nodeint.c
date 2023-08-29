#include "lists.h"
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a node at a specific index in the list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index at which to insert the new node.
 * @n: Value to store in the new node.
 * Return: Pointer to the head of the list after insertion, or NULL on failure.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *current = *head;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;

	if (index == 0)
	{
		new_node->next = current;
		*head = new_node;
		return (new_node);
	}

	while (index > 1)
	{
		if (current == NULL)

		{
			free(new_node);
			return (NULL);
		}

	current = current->next;
	index--;
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}

#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds new nodes to a list
 * @n: int to add
 * @head: current position in list
 *
 * Return: Pointer to current list position
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

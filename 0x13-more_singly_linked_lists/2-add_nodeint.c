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
	listint_t *new_node;

	new_node = *head;
	new_node = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}

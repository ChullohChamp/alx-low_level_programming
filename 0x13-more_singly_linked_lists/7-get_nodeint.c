#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns nth node of a linked list
 * @head: Pointer to address of current list
 * @index: Index of node
 *
 * Return: nth node of a linked list
 * else Null if node is non-existant
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;

	for (unsigned int i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}

	return (current);
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: Pointer to linked lists head
 *
 * Return: Head node's data
 * else 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num = 0;

	if (*head)
	{
		num = (*head)->n;
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
		return (num);
}

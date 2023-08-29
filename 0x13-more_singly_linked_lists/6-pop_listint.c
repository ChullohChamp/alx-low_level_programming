#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: Pointer to linked lists head
 *
 * Return: Head node's data
 * else 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if (*head != NULL)
	{
		temp = (*head)->next;
		data = (*head)->data;
		free(*head);
		*head = new_head;
	}

	return (n);
}

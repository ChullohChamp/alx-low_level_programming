#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: double pointer of list to free
 *
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}

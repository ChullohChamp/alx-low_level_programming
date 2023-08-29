#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - sums all elements of a list
  * @head: pointer to the head of the current list
  * Return: sum of all elements
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->data;
		current = current->next;
	}

	return (sum);
}

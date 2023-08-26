#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Adds node to the begining of a list
 * @head : Original linked list
 * @str : string to add node to
 *
 * Return : Address of new list else NULL
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
	return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);

}





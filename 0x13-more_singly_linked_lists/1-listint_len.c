#include <stddef.h>
#include <lists.h>

/**
 * listint_len - Returns number of elements in a linked list
 * @h: head of the linked list
 *
 * Return: Number of nodes in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while  (h)

	{
		h = h->next;
		count++;
	}

	return (count);
}

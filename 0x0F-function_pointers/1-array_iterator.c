#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - prints name using pointer to function
 *@array: array to use
 *@size: size of array
 *@action: pointer to print
 *Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i])
	}
}

#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: smallest number in the array
* @max: lagrest value in the array
*
* Return: pointer to the address of the memory block
*/


int *array_range(int min, int max)
{
	int *x, i = 0;

	if (min > max)
		return (NULL);

	x = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (x == NULL)
		return (NULL);

	while (min <= max)
	{
		x[i] = min;
		i++;
		min++;
	}

	return (x);
}


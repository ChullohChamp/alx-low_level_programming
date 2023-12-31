#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - Allocates memory, exits (98) if there's an error
  * @b: the size to allocate
  *
  * Return: pointer to the address of the memory block
  */

void *malloc_checked(unsigned int b)
{
	void *ck;

	ck = malloc(b);
	if (ck == NULL)
		exit(98);
	return (ck);
}


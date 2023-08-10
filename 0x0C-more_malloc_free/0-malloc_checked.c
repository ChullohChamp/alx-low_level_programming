#include "main.h"

/**
  * malloc_checked - Allocates memory, exits (98) if there's an error
  * @b: the size to allocate
  *
  * Return: pointer to the address of the memory block
  */

void *malloc_checked(unsigned int b)
{
	void *block;

	block = malloc(b);
	if (block == NULL)
		exit(98);
	return (block);
}


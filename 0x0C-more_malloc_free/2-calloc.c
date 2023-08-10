#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory using malloc and initializes to 0
*@nmemb: number of elements
*@size: size of the memory block to be allocated
*
*Return: poiner to the address of the memory block, Null if it fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ck;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ck = malloc(nmemb * size);
	if (ck != NULL)
	{
		for (a = 0; a < (nmemb * size); a++)
			ck[a] = 0;
		return (ck);
	}
	else
		return (NULL);
}

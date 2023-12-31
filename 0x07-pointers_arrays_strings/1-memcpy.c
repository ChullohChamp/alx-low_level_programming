#include "main.h"
/**
  * _memcpy - copy memory area
  * @dest: destination  memory area
  * @src: source memory area
  * @n: bytes from memory area to copy
  *
  * Return: memory area that has been replaced
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

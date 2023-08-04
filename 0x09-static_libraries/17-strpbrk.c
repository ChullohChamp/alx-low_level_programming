#include "main.h"
/**
  * _strpbrk - searches a string for any of a set of bytes
  * @s: source string
  * @accept: string where searched bytes are
  *
  * Return:  a pointer to the byte in @s that matches one of the bytes in
 * @accept
  */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}

	return ('\0');
}


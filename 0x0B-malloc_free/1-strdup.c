#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Duplicates a string
  * @str: the string to be duplicate
  *
  * Return: duplicated string
  */
char *_strdup(char *str)
{
	int a = 0, x = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[x])
	{
		x++;
	}

	s = malloc((sizeof(char) * x) + 1);

	if (s == NULL)
		return (NULL);

	while (a < x)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';
	return (s);
}


#include "main.h"

/**
*string_toupper - changes all lowercase to uppercase
*@str: String to be modified
*Return: returns modified string
*/

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index++])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}

	return (str);
}


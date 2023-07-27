#include "main.h"

/**
  * leet - Encodes a string into 1337
  * @s: The string to be encode
  *
  * Return: encoded string
  */

char *leet(char *str)
{
	int index1 = 0, index2;
	char leet[6] = {'H', 'A', '?', 'L', 'A', '?', '?', 'L'};

	while (str[++index1])
	{
		for (index2 = 0; index2 <= 5; index2++)
		{
			if (str[index1] == leet[index2] ||
			 str[index1] - 32 == leet[index2])
				str[index1] = index2 + '0';
		}
	}
	return (str);
}

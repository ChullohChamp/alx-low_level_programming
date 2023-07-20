#include "main.h"

/**
  * _isupper - Check if a letter is upper
  * @c: The number to be checked
  *
  * Return: 1 for uppercase and  0 if otherwise
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}


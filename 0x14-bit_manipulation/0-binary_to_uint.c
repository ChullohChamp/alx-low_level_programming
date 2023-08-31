#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: Converted number
 * 0 if there is one or more chars in the string that is not 0 or 1
 * 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	if (!b)
		return (0);

	unsigned int result = 0;
	unsigned int power_of_two = 1;
	int length = 0;

	while (b[length])
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
		length++;
	}

	while (length > 0)
	{
		result += (b[length - 1] - '0') * power_of_two;
		power_of_two *= 2;
		length--;
	}

	return (result);
}


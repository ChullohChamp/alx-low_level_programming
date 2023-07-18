#include "main.h"
/**
 * _islower  - checks if the character c is lower or upper case
 *@c : the character to be checked
 * Return: 1 if lowercase, 0 if uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

		return (0);
}


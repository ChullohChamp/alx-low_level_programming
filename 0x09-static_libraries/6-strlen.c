#include "main.h"
/**
 * _strlen - prints the lenght of a string
 *
 * @s:string to be tested
 * Return: String length
 */
int _strlen(char *s)
{

	int x = 0;

	for (; *s != '\0'; s++)
	{
		x++;
	}

	return (x);
}


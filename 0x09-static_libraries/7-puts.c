#include "main.h"
/**
* _puts - Prints a string followed by a new line
*@s: string to print
*Return: NULL
*/
void _puts(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts(s + 1);
	}
}

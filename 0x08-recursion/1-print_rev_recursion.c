#include "main.h"
/**
* _print_rev_recursion - a Function that prints a string in reverse.
*@s: parameter string
*
* Return: NULL
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

#include "main.h"
/**
 * print_last_digit - returns the value of the last digit
 * @n: number to be returned
 *
 * Return: returns the value of last digit in a number
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)

	{

	last_digit = last_digit * -1;

	}

	_putchar(last_digit + '0');

	return (last_digit);
}



#include "main.h"
/**
 * swap_int - swaps the value of integers
 *
 * @a: an integer to be swaped
 * @b: second integer to be swaped
 *
 * Return: null
 */
void swap_int(int *a, int *b)
{
	int gcg = *a;

	*a = *b;
	*b = gcg;
}

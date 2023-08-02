#include "main.h"
#include "stdio.h"

/**
 * primeFinder - checks for prime number
 *
 * @a: the number to check
 * @b: the iteration
 *
 * Return: a value if integer is prime
 **/

int primeFinder(int a, int b)
{
	if (a <= 1 || a % b == 0)
		return (0);
	else if (a == b)
		return (1);
	else if (a > b)
		primeFinder(a, b + 1);

	return (1);
}

/**
 * is_prime_number - checks if an integer is a prime number or not
 *
 * @n: the number to check
 *
 * Return: 1 for prime or 0 if otherwise
*/

int is_prime_number(int n)
{
	return (primeFinder(n, 2));
}


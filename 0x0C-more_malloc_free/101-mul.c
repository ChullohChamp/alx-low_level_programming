#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

/**
 *isNumeric - checks if mun1 nad num2 are only numeric
 *@str: string to check
 *Return: NULL if it fails
 */

bool isNumeric(const char *str)
{
	while (*str)
	{
	if (!isdigit(*str))
	{
	return (false);
	}
	str++;
	}
	return (true);
}

/**
 *multiply - multiplies two numbers
 *@num1: first number
 *@num2: second number
 *Return: multiple
 */

long long multiply(long long num1, long long num2)
{
	return (num1 * num2);
}


/**
 * main - check number of cmd line arguments
 *@argc: ...
 *@argv: ...
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
	printf("Error\n");
	return (98);
	}

	if (!isNumeric(argv[1]) || !isNumeric(argv[2]))
	{
	printf("Error\n");
	return (98);
	}

	long long num1 = atoll(argv[1]);
	long long num2 = atoll(argv[2]);

	long long result = multiply(num1, num2);

	printf("%lld\n", result);

	return (0);
}


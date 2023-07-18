#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int prev = 1, current = 2, next;
	int count;

	printf("%lu, %lu", prev, current);

	for (count = 2; count < 98; count++)
	{
		next = prev + current;
		printf(", %lu", next);
		prev = current;
		current = next;
	}

	printf("\n");
	return (0);
}


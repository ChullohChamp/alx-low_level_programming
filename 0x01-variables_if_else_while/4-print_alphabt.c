#include <stdio.h>
#include <stdlib.h>
#include <time>

/**
 * main - Entry point
 * Return: (0) (success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z' ; letter++)
	{
		if (letter != 'q' && != 'e')
		{
			putchar(letter);
		}
	}
	putchar("\n");

	return (0);
}

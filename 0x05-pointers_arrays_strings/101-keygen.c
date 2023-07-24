#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point generates a random password
 *
 * Return: the generated password
 */
int main(void)
{
	char c;
	int x;

	srand(time(0));
		while (x <= 4102)
		{
			c = rand() % 128;
			x += c;
			putchar(c);
		}
	putchar(4772 - x);
	return (0);
}


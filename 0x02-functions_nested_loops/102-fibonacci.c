#include <stdio.h>

/**
  * main - Prints the first 52 fibonacci numbers starting with 1 and 2
  *
  * Return: Null
  */
int main(void)
{
	int a = 0;
	long b = 1, c = 2;

	while (a < 50)
	{
		if (a == 0)
			printf("%ld", b);
		else if (a == 1)
			printf(", %ld", c);
		else
		{
			c += b;
			a = c - b;
			printf(", %ld", c);
		}

		++i;
	}

	printf("\n");
	return (0);
}


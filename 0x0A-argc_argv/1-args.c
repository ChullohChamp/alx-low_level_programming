#include <stdio.h>
/**
  * main - Prints the number of arguments
  * @argc: argument count
  * @argv: array of arguments
  *
  * Return:always  0
  */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

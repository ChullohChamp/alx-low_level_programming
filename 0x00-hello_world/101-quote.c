#include <unistd.h>
#include <string.h>
#define MESSAGE "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
/**
 * main - Entry point
 * Return: Always 1 (Success feedback)
 */
int main(void)
{
	write(STDERR_FILENO, MESSAGE, strlen(MESSAGE));
	return (1);
}

#include "main.h"
/**
  * print_numbers - Print the numbers since 0 up to 9
  *
  * Return: The numbers since 0 up to 9
  */
void _putchar(char c)
{
    // Implement the _putchar function as per your requirements.
    // For simplicity, I'll use printf here.
    printf("%c", c);
}
void print_numbers(void)
{
	char numbers[] = "0123456789\n";
	int i = 0;
	while (numbers[i] != '\0') 
	{
	_putchar(numbers[i]);
	i++;
    	}
}

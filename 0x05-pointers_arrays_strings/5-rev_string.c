#include "main.h"

/**
  * _strlen - Returns string length
  * @s: The string to be reversed
  *
  * Return: Null
  */

/* Function to count string */
int _strlen(char *s)
{

	int x = 0;

	for (; *s != '\0'; s++)
	{
		x++;
	}

	return (x);
}
/**
 * rev_string - reverses string
 * @s: Pointer to character
 * Function to reverse string 
 */

void rev_string(char *s)
{
	int gcg = _strlen(s);
	char *start = s;
	char *end = s + gcg - 1;

	while (start < end)
{
	char temp = *start;
	*start = *end;
	*end = temp;

	start++;
end--;
}
}




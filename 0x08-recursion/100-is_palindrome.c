#include "main.h"

/**
  *palindromeChecker - checks if a string is palindrome
  * @str: the string parameter
  * @len: string lenght
  * @i: incrementor
  * Return: integer value
  */

int palindromeChecker(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
		return (palindromeChecker(str, len - 1, i + 1));
	if (str[i] != str[len])
		return (0);
	return (1);
}

/**
 * _strlen_recursion - returns string length
 *
 *@s: the string to check
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: the string to check
 *
 * Return: 1 if it's a palindrome, 2 if it's not
 */

int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s) - 1;

	return (palindromeChecker(s, length, i));
}


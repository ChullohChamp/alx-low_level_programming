#include "main.h"

int check_palindrome(char *s);

/**
  * is_palindrome - Checks if a string is palindrome
  * @s: the string parameter
  *
  * Return: true is @s is a palindrome
  */
int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);

	return (check_palindrome(s));
}

/**
  * check_palindrome - Checks if a string is palindrome
  * @s: the string parameter
  * *
  * Return: integer value
  */
int check_palindrome(char *s)
{
	int l = _strlen_recursion(s) - 1;

	if (*s == s[l])
	{
		s++;
		l--;
	}
	else
	{
		return (0);
	}

	return (1);
}

/**
  * _strlen_recursion - Gets string length
  * @s: the string parameter
  *
  * Return: the string length
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}


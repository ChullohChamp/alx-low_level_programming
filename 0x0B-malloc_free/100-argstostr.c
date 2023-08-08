#include "main.h"
#include <stdlib.h>

/**
  * argstostr - concatenates all the arguments of the program
  * @ac: the argument count
  * @av: the argument vector
  *
  * Return: ...
  */

char *argstostr(int ac, char **av)
{
	int total_length = 0, current_position = 0;
	char *s;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (int i = 0; i < ac; i++)
{
	int arg_length = 0;

	while (av[i][arg_length] != '\0')
		arg_length++;

		total_length += arg_length + 1;
}

	s = (char *)malloc(total_length * sizeof(char) + 1);

	if (s == NULL)
	return (NULL);

	for (int i = 0; i < ac; i++)
{
	int arg_length = 0;

	while (av[i][arg_length] != '\0')
	{
		s[current_position] = av[i][arg_length];
		current_position++;
		arg_length++;
	}

		s[current_position] = '\n';
		current_position++;
}

	s[current_position] = '\0';

	return (s);
}


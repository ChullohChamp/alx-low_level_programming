#include "main.h"

/**
 * str_split - Splits a string
 * @str: The string that will be splited
 * 
 * Return: On success, it returns the new array
 * of strings. On failure, it returns NULL
 */
char **str_split(char *str)
{   
    char *piece, **str_arr[i] = NULL, *str_cpy;
    int number_of_words = 0, i;

    if (str == NULL)
    {
        return (NULL);
    }
    str_cpy = str;
    piece = strtok(str_cpy, " ");
    while (piece != NULL)
    {
        if ((*piece) == '\n')
        {
            piece = strtok(NULL, " "); continue;
	}
	number_of_words++;
	piece = strtok(NULL, " ");
}
	str_arr[i] = (char **)malloc(sizeof(char *) * number_of_words);
	piece = strtok(str, " ");
	for (i = 0; piece != NULL; i++)
{
		if ((*piece) == '\n'	
		{	
			piece = strtok(NULL, " ");
			continue;
		}
	str_arr[i] = (char *)malloc(sizeof(char) * (strlen(piece) + 1));
	strcpy(str_arr[i], piece);
	piece = strtok(NULL, " ");
}
	return (str_arr);
}

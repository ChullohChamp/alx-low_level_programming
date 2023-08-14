#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
  * new_dog - creates a new struct of type dog
  * @name: struct parameter name
  * @age: struct parameter age
  * @owner: struct parameter owner
  * Return: returns pointer to buffer of datatype dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen, olen, i;
	dog_t *doggy;

	nlen = strlen(name) + 1;
	olen = strlen(owner) + 1;

	doggy = malloc(sizeof(dog_t));
		if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(nlen * sizeof(char));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	strcpy(doggy->name, name);

	doggy->age = age;

	doggy->owner = malloc(olen * sizeof(char));

	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	strcpy(doggy->owner, owner);

	return (doggy);
}


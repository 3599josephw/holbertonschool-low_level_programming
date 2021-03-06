#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - initializes variables from the dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->name = strdup(name);
	newdog->age = age;
	newdog->owner = strdup(owner);

	return (newdog);
}

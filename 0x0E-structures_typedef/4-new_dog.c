#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - initializes variables from the dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));


	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;

	if (newdog == NULL)
		return (NULL);

	return (newdog);
}

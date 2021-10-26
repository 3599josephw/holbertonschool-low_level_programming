#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
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
	char name2 = *name, owner2 = *owner;

	newdog = malloc(sizeof(dog_t));

	newdog->name = &name2;
	newdog->age = age;
	newdog->owner = &owner2;

	if (newdog == NULL)
		return (NULL);

	return (newdog);
}

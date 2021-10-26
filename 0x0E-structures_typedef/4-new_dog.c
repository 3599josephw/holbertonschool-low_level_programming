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
	char name2[] = "", owner2[] = "";

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);


	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;

	memcpy (name2, name, sizeof(*name));
	memcpy (owner2, owner, sizeof(*owner));

	return (newdog);
}

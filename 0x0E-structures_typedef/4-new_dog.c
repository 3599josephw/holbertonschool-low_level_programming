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
	char *name2 = name, *owner2 = owner;

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);


	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;

	return (newdog);
}

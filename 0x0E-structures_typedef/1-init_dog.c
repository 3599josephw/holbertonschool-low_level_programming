#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - initializes variables from the dog struct
 * @d: pointer to struct passed in
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - who let the dogs out
 * @d: the struct
 * Return: nada
 */
void free_dog(dog_t *d)
{
	free(d);

}

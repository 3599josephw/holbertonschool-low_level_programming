#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup - duplicate string
 * @str: string given
 * Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
	int i, size;
	char *array;

	if (array == NULL || str == NULL)
	{
		return (NULL);
	}

	size = strlen(str);

	array = malloc((size + 1) * sizeof(char));

	for (i = 0; i < size; i++)
	{
		array[i] = str[i];
	}

	return (array);




}

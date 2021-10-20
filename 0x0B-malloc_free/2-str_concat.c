#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - concatenate two strings
 * @s1: string given
 * @s2: string added
 * Return: pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, size, size1, size2;
	char *array;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	size1 = strlen(s1);
	size2 = strlen(s2);
	size = size1 + size2;

	array = malloc((size + 1) * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		array[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		array[i] = s2[j];
		i++;
	}


	return (array);
}

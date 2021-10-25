#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: string one
 * @s2: string two
 * @n: limit of string to copy from s2
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *concat, *new2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	new2 = malloc((sizeof(char) * n) + 1);
	if (new2 == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		new2[i] = s2[i];
	new2[i] = '\0';
	concat = malloc(sizeof(s1) + sizeof(new2));
	if (concat == NULL)
	{
		free(new2);
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; new2[j] != '\0'; j++)
	{
		concat[i] = new2[j];
		i++;
	}
	concat[i] = '\0';
	free(new2);
	return (concat);
}

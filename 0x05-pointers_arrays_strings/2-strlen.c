#include "main.h"
/**
 * _strlen - function
 * @s: character
 * Return: void
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}


	return (i);
}

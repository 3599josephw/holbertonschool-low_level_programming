#include "main.h"
/**
 * *string_toupper - lowercase to uppercase
 * @c: the string
 * Return: uppercase string
 */

char *string_toupper(char *c)
{
	int i;

	i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - 32;
		}
	i++;
	}
	return (c);
}

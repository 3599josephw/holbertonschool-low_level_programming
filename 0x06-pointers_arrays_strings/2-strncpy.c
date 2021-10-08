#include "main.h"
/**
 * *_strncpy - concatenates two strings
 * @dest: text to be appended to
 * @src: text to be appended
 * @n: maximum bytes from src
 * Return: pointer to the resulting string 'dest'
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;

	while (src[b] != '\0')
	{
		if (b < n)
		{
			dest[a] = src[b];
		}
		b++;
		a++;
	}

	dest[a] = '\0';

	return (dest);
}

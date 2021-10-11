#include "main.h"
/**
 * *_memcpy - function
 * @dest: variable
 * @src: variable
 * @n: variable
 * Return: the replaced array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);

}

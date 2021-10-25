#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	int *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	if (size > sizeof(int))
	{
		arr = malloc(nmemb * size);
	}
	else
	{
		arr = malloc(nmemb * sizeof(int));
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < nmemb)
	{
		arr[i] = 0;
		i++;
	}

	return (arr);
}

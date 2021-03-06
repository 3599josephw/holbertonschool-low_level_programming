#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_range - create an array of integers
 * @min: lowest number in array
 * @max: highest number
 * Return: array of integers
 */

int *array_range(int min, int max)
{
	int *arr, i, j;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	j = 0;

	for (i = min; i <= max; i++)
	{
		arr[j] = i;
		j++;
	}

	return (arr);

}

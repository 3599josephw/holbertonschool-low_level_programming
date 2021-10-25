#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_range - create an array of integers
 * @min: lowest number in array
 * @max: highest number
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		arr[i] = i;
	}

	return (arr);

}

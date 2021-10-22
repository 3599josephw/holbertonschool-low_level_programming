#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * **alloc_grid - 2d array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to new string
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr = (int **)malloc(height * sizeof(int *));

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));

	if (arr[i] == NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(arr[i]);
		}
		free(arr);
		return (NULL);
	}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}

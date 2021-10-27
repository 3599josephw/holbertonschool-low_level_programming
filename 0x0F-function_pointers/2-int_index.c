#include "function_pointers.h"
/**
 * int_index - search for an integer
 * @array: array
 * @size: size
 * @cmp: function
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size && cmp(array[i]) == 0; i++)
	{
		cmp(array[i]);
	}

	if (cmp(array[i]) == 0)
		return (-1);

	return (i);

}

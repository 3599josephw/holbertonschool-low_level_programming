#include "function_pointers.h"
/**
 * array_iterator - function that prints a name
 * @array: array
 * @size: size
 * @action: function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || size == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}


}

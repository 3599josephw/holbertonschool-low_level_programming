#include "main.h"
/**
 * reverse_array - reverses array of integers
 * @a: array
 * @n: number of elements in array
 * Return: pointer to the resulting string 'dest'
 */

void reverse_array(int *a, int n)
{
	int *tmp, *first, *last, i;

	*first = a;
	*last = a + n - 1;


	while (first < last)
	{
		*tmp = *first;
		*first = *last;
		*last = *tmp;
		first++
		last--;
	}

}

#include "main.h"
/**
 * reverse_array - reverses array of integers
 * @a: array
 * @n: number of elements in array
 * Return: pointer to the resulting string 'dest'
 */

void reverse_array(int *a, int n)
{
	int tmp, first, last;

	tmp = 0;
	first = 0;
	last = 0;
	n = n - 1;


	while (first < n)
	{
		tmp = a[first];
		last = a[n];
		a[n] = tmp;
		a[first] = last;
		first++;
		n--;
	}

}

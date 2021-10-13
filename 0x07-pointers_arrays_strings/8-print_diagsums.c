#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function
 * @a: variable
 * @size: of array
 * Return: return
 */
void print_diagsums(int *a, int size)
{
	int i, *b, suma = 0, sumb = 0;

	b = a;

	for (i = 0; i < size; i++)
	{
		suma = suma + a[i];
		a = a + size;
	}
	printf("%d, ", suma);

	for (i = size - 1; i >= 0; i--)
	{
		sumb = sumb + b[i];
		b = b + size;
	}
	printf("%d\n", sumb);

}

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
	int i, suma = 0, sumb = 0;


	for (i = 0; i < size; i++)
	{
		suma = suma + a[i];
	}
	printf("%d, ", suma);

	for (i = size; i > 0; i--)
	{
		sumb = sumb + a[i];
	}
	printf("%d\n", sumb);

}

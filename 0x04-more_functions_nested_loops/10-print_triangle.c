#include "main.h"
/**
 * print_triangle - print the triangle
 * @size: size of triangle (size x size)
 * Return: On success 1.
 */
void print_triangle(int size)
{
int i;
int j;
if (size > 0)
{
	for (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
		_putchar('#');
		}
		_putchar('\n');
	}
}
else
{
	_putchar('\n');
}
}

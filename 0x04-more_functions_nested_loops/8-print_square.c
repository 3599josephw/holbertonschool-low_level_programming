#include "main.h"
/**
 * print_square - print the square
 * @size: size of square (size x size)
 * Return: On success 1.
 */
void print_square(int size)
{
int i;
int j;
if (size > 0)
{
	for (i  = 0; i < size; i++)
	{
		_putchar('#');
		for (j = 1; j < size; j++)
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

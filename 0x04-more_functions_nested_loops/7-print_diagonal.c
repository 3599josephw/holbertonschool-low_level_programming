#include "main.h"
/**
 * print_diagonal - print a diagonal line
 * @n: number of \ printed
 * Return: On success 1.
 */
void print_diagonal(int n)
{
int i;
int j;
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

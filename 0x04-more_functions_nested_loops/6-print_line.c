#include "main.h"
/**
 * print_line - print a line
 * @n: number of times _ is printed
 * Return: On success 1.
 */
void print_line(int n)
{
int i;
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
_putchar('\n');
}

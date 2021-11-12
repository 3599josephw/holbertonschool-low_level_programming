#include "main.h"
/**
 * print_binary - binary to decimal
 * @n: the number
 * Return: binary
 */
void print_binary(unsigned long int n)
{

	int c, k;

	for (c = 0; c <= 31; c++)
	{
		k = n >> c;

		if (k & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}

}

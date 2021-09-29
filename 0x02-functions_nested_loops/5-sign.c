#include "main.h"
/**
 * print_sign - if stuff
 * @n: the int being checked
 * Return: yeehaw
 */
int print_sign(int n)
{
if (n > 0)
	{
	return (1);
	_putchar('+');
	}
else if (n == 0)
	{
	return (0);
	_putchar('0');
	}
else
	{
	return (-1);
	_putchar('-');
	}
}

#include "main.h"
/**
 * print_last_digit - stuff
 * @n: the int being checked
 * Return: yeehaw
 */
int print_last_digit(int n)
{
n = n % 10;
	if (n < 0)
	{
		n = -n;
		_putchar('0' + n);
		return (n);
	}
	else
	{
		_putchar('0' + n);
		return (n);
}
}

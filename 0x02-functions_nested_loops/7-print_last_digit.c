#include "main.h"
/**
 * print_last_digit - stuff
 * @n: the int being checked
 * Return: yeehaw
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n
	}
n = n % 10;
_putchar(n + '0')
return (n);
}

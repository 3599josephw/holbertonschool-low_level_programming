#include "main.h"
#include <stdio.h>
/**
 * print_binary - binary to decimal
 * @n: the number
 * Return: binary
 */
void print_binary(unsigned long int n)
{

	if (n > 1)
		print_binary(n >> 1);

	_putchar(n & 1);

}

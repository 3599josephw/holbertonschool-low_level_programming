#include "main.h"
/**
 * times_table - stuff
 *
 * Return: yeehaw
 */
void times_table(void)
{
int i;
int j;
int k;
for (i = 0; i <= 9; i++)
{
_putchar('0');
	for (j = 1; j <= 9; j++)
	{
	k = i * j;
	_putchar(',');
	_putchar(' ');
	if (k >= 10)
	{
	_putchar('0' + (k / 10));
	}
	else
	_putchar(' ');
	_putchar('0' + (k % 10));
	}
_putchar('\n');
}
}

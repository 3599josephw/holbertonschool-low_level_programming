#include "main.h"
/**
 * more_numbers - print 0-14 with three putchars
 *
 * Return: nada.
 */
void more_numbers(void)
{
int j, i, first, last;

for (i = 0; i < 10; i++)
{
	for (j = 0; j <= 14; j++)
	{
		last = j;
		if (j >= 10)
		{
			first = 1;
			last = last % 10;
			_putchar(first + '0');
		}
	_putchar(last + '0');
	}
	_putchar('\n');
}
}

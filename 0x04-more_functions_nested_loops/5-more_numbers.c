#include "main.h"
/**
 * more_numbers - check is uppercase
 *
 * Return: On success 1.
 */
void more_numbers(void)
{
int j, i;

for (j = 0; j < 10; j++)
{
	for (i = 0; i <= 14; i++)
	{
		if (i < 10)
		{
			_putchar('0' + (i % 10));
		}
		else
		{
		  _putchar('0' + (i / 10));
		}
	}
	_putchar('\n');
}
}

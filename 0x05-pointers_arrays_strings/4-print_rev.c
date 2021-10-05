#include "main.h"
/**
 * print_rev - function
 * @s: character
 * Return: void
 */

void print_rev(char *s)
{
if (s[0] == '\0')
{
	_putchar('\n');
}
else
{
	while (*s != '\0')
	{
		s++;
	}

	s--;

	while (*s >= 0)
	{
		_putchar(*s);
		s--;
		if (*s == 0)
		{
			break;
		}
	}
	_putchar('\n');
}
}

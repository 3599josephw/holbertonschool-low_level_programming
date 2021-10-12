#include "main.h"
/**
 * _print_rev_recursion - string then newline
 * @s: string passed in
 */

void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}

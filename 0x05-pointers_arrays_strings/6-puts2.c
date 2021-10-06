#include "main.h"
/**
 * puts2 - function
 * @str: character
 * Return: void
 */

void puts2(char *str)
{
	int i;

	while (*str != '\0')
	{
		_putchar(*str);
		i++;
		if (i == '\0')
		{
			break;
		}
		str += 2;
	}
	_putchar('\n');




}

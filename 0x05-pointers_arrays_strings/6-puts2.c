#include "main.h"
/**
 * puts2 - function
 * @str: character
 * Return: void
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		if (str[i] == '\0')
		{
			break;
		}
		i++;
	}
	_putchar('\n');
}

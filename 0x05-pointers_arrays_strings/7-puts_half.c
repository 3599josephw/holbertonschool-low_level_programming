#include "main.h"
/**
 * puts_half - function
 * @str: character
 * Return: void
 */
void puts_half(char *str)
{
	int i, halfway, len;

	i = 0;
	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	for (i = len; i >= 0; i--)
	{
		str--;
	}

	if (len % 2 == 0)
	{
		halfway = len / 2;
	}
	else
	{
		halfway = (len + 1) / 2;
	}


	for (i = 0; i <= len; i++)
	{

		if (i > halfway)
		{
			_putchar(*str);
		}
		str++;
	}
	_putchar('\n');
}

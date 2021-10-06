#include "main.h"
/**
 * puts2 - function
 * @str: character
 * Return: void
 */

void puts2(char *str)
{

	while (*str != '\0')
		{
			_putchar(*str);
			str+=2;
		}
        _putchar('\n');




}

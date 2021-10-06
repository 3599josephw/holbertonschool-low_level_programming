#include "main.h"
/**
 * rev_string - function
 * @s: character
 * Return: void
 */

void rev_string(char *s)
{
	int i, len;
	char temp;

	i = 0;
	len = 0;

	while (s[i++])
	{
		len++;
	}

	for (i = len - 1; i >= (len / 2); i--)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}

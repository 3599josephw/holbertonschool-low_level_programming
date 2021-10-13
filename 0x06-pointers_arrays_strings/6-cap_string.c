#include "main.h"
/**
 * *cap_string - capitalize all words of a string
 * @ch: the string given
 * Return: uppercase string
 */

char *cap_string(char *ch)
{
	int i;

	i = 0;

	while (ch[i] != '\0')
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
		{
			if (ch[i - 1] == ' ' || ch[i - 1] == '\n' ||
			ch[i - 1] == '\t' || ch[i - 1] == '.' ||
			ch[i - 1] == ',' || ch[i - 1] == ';'
			|| ch[i - 1] == '!' || ch[i - 1] == '?'
			|| ch[i - 1] == '"' || ch[i - 1] == '('
			|| ch[i - 1] == ')' || ch[i - 1] == '{'
			|| ch[i - 1] == '}' || b == 0)
			{
				ch[i] = ch[i] - 32;
			}
		}

	i++;
	}
	return (ch);
}

#include "main.h"
/**
 * *leet - leetspeak
 * @ch: the string given
 * Return: leetified string
 */

char *leet(char *ch)
{
int a, b;
char leet[] = {"aAeEoOtTlL"};
char l33t[] = {"4433007711"};


	a = 0;
	b = 0;

	while (ch[a] != '\0')
	{
		while (leet[b] != '\0' && ch[a] != leet[b])
		{
			b++;
		}
		if (b != '\0')
		{
		ch[a] = l33t[b];
		}
		a++;
	}
	return (ch);
}

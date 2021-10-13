#include "main.h"
/**
 * *leet - leetspeak
 * @ch: the string given
 * Return: leetified string
 */

char *leet(char *ch)
{
int a, b;
char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char numbers[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};


	a = 0;
	b = 0;

	for (a = 0; ch[a] != 0; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (ch[a] == letters[b])
			{
				ch[a] = numbers[b];
			}
		}
	}

	return (ch);
}

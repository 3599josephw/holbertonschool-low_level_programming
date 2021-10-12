#include "main.h"
/**
 * *_strpbrk - function
 * @s: variable
 * @accept: variable
 * Return: return
 */
char *_strpbrk(char *s, char *accept)
{

	int a, b;

	a = 0;

	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
			b++;
		}
		a++;
	}
	return ('\0');

}

#include "main.h"
/**
 * *_strspn - function
 * @s: variable
 * @accept: variable
 * Return: return
 */
unsigned int _strspn(char *s, char *accept)
{

    int a, b, len;

	a = 0;
	len = 0;

	while (s[a] != '\0' && s[a] != ' ' && s[a] != ',' && s[a] != '.')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
			    len++;
			}
			b++;
		}
		a++;
	}
	return (len);

}

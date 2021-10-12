#include "main.h"
/**
 * *_strstr - function
 * @haystack: variable
 * @needle: variable
 * Return: return
 */
char *_strstr(char *haystack, char *needle)
{

	int a, b;

	a = 0;

	while (haystack[a] != '\0')
	{
		b = 0;
		if (haystack[a] == needle[b])
		{
			return (haystack + a);
		}

		a++;
	}
	return ('\0');

}

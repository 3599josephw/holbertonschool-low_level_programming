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
	b = 0;

	if (needle[b] == 0)
	{
		return (haystack);
	}

	while (haystack[a] != '\0')
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
			if (needle[b + 1] == '\0')
			{
				return (haystack + a);
			}
		}

		a++;
	}
	return ('\0');

}

#include "main.h"
/**
 * _isalpha - if stuff
 * @c: the char being checked
 * Return: On success 1.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
else
	{
	return (0);
	}
}

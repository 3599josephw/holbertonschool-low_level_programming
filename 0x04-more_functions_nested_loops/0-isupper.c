#include "main.h"
/**
 * _isupper - Check if uppercase.
 * @c: the char being checked
 * Return: On success 1.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
else
	{
	return (0);
	}
}

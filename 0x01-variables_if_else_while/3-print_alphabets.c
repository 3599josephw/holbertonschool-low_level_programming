#include <stdio.h>
/**
 * main - random number generator
 *
 * Return: zero
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}

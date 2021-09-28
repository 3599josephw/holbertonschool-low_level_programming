#include <stdio.h>
/**
 * main - random number generator
 *
 * Return: zero
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	putchar((i % 10) + '0');
	}
	for (i = 'a'; i <= 'f'; i++)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}

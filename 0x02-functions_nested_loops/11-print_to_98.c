#include <stdio.h>
/**
 * print_to_98 - stuff
 * @n: a number given
 *
 * Return: yeehaw
 */
void print_to_98(int n)
{
int i;
if (n > 98)
{
	for (i = n; i >= 98; i--)
	{
	printf("%d", i);
	if (i != 98)
		{
		printf(", ");
		}
	}
}
else if (n == 98)
{
printf("98");
}
else
{
	for (i = n; i <= 98; i++)
	{
	printf("%d", i);
		if (i != 98)
		{
		printf(", ");
		}
	}
}
printf("\n");
}

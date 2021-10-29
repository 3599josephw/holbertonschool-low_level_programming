#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va;

	if (separator == NULL)
		return;

	va_start(va, n);

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", va_arg(va, int));
		}
		else
		{
			printf("%d%s", va_arg(va, int), separator);
		}
	}
	printf("\n");
}

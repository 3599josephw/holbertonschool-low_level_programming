#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between numbers
 * @n: number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va;

	if (separator == NULL)
		return;

	va_start(va, n);

	for (i = 0; i < n; i++)
	{
		/**
		if (va_arg(va, const char *) == NULL)
		{
			printf("(nil)");
		}
		else
		{
		*/
			if (i == (n - 1))
			{
				printf("%s", va_arg(va, const char *));
			}
			else
			{
				printf("%s%s", va_arg(va, const char *), separator);
			}
		/**
		}
		*/
	}
	printf("\n");
}

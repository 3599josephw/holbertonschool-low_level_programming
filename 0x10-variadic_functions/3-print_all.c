#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
/**
 * print_all - prints strings
 * @separator: string to be printed between numbers
 * @n: number of strings passed
 */
void print_all(const char * const format, ...)
{
	const char *t;
	char *s;
	unsigned int i;
	double d;
	va_list arg;
	int len, index;

	len = (strlen(format) - 1);
	index = 0;

	printf("%d\n", len);
	va_start(arg, format);

	t = format;

	while (*t != '\0')
	{
		switch(*t)
		{
			case 'c':
				i = va_arg(arg, int);
				putchar(i);
				break;
			case 'i':
				i = va_arg(arg, int);
				printf("%d", i);
				break;
			case 'f':
				d = va_arg(arg, double);
				printf("%f", d);
				break;
			case 's':
				s = va_arg(arg, char *);
				printf("%s", s);
				break;
			}
		if (index < len && (*t == 'i' || *t == 'c' || *t == 'f' || *t == 's'))
			printf(", ");

		index++;
		t++;
	}

	printf("\n");
}

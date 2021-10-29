#include "variadic_functions.h"
/**
 * sum_them_all - adds all the parameters
 * @n: number of parameters
 * Return: sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list va;

	if (n == 0)
		return (0);

	sum = 0;

	va_start(va, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(va, int);
	}

	va_end(va);

	return (sum);
}

#include "main.h"
/**
 * factorial - factorial of number
 * @n: number to be factorialed
 * Return: the facotrialized result
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	else
	{
		n = n * factorial(n - 1);

		return (n);
	}


}

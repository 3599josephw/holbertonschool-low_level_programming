#include "main.h"
/**
 * is_prime_number - prime number
 * @n: number entered
 * Return: 1 if prime, else 0
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n == 2)
	{
		return (1);
	}
	if (n < 2)
	{
		return (0);
	}
	if (n % 1 == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	i++;
	return (is_prime_number(n), i + 1);
}

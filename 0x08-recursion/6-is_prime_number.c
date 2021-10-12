#include "main.h"
/**
 * is_prime_number - prime number
 * @n: number entered
 * Return: 1 if prime, else 0
 */

int prime_num(int n, int i);

int is_prime_number(int n)
{
	int ans = prime_num(n, 2);
	return (ans);
}


int prime_num(int n, int i)
{

	if (n == 2)
	{
		return (1);
	}
	if (n < 2)
	{
		return (0);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (prime_num(n, i + 1));
}

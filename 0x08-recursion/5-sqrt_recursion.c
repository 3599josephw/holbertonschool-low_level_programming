int _sqrt_num(int low, int high, int i);
int prime_num(int n, int i);

#include "main.h"
/**
 * _sqrt_recursion - find square root of number
 * @n: number entered
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	int ans, ifPrime;

	if (n < 0)
	{
		return (-1);
	}

	ifPrime = prime_num(n, 2);

	if (ifPrime == 1)
	{
		return (-1);
	}

	ans = _sqrt_num(0, n, n);

	return (ans);
}

/**
 * _sqrt_num - find the square root
 * @low: low range
 * @high: high range
 * @i: iterator
 * Return: the square root
 */
int _sqrt_num(int low, int high, int i)
{
	int mid;

	if (low <= high)
	{
		mid = (low + high) / 2;

		if ((mid * mid <= i)
		&& ((mid + 1) * (mid + 1) > i))
		{
			return (mid);
		}

		else if (mid * mid < i)
		{
			return (_sqrt_num(mid + 1, high, i));
		}
		else
		{
			return (_sqrt_num(low, mid - 1, i));
		}
	}
	return (low);
}

/**
 * prime_num - determine if prime
 * @n: number
 * @i: iterator
 * Return: 1 if prime, 0 if not prime
 */

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

#include "main.h"
int count(int n);
/**
 * flip_bits - returns a bit at an index
 * @n: the number given
 * @m: point in the array to change
 * Return: the converted number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	if (n == '\0' || m == '\0')
		return ('\0');

	return (count(n ^ m));
}
/**
 * count - count
 * @n: number
 * Return: i
 */
int count(int n)
{
	int i = 0;

	while (n > 0)
	{
		i++;
		n &= (n - 1);
	}

	return (i);
}

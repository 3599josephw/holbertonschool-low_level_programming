#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: array holding the binary number
 * Return: the converted integer
 */
unsigned int binary_to_uint(const char *b)
{
	int dec = 0, i = 0, rem;
	unsigned int n = atoi(b);

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	i = 0;

	while (n != 0)
	{
		rem = n % 10;
		n /= 10;
		dec += rem * power(2, i);
		++i;
	}
	return (dec);
}

/**
 * power - recreation of pow function
 * @x: number given
 * @y: raised to the power of
 * Return: the result
 */

int power(int x, unsigned int y)
{
	if (y == 0)
		return (1);
	else if (y % 2 == 0)
		return (power(x, y / 2) * power(x, y / 2));
	else
		return (x * power(x, y / 2) * power(x, y / 2));
}

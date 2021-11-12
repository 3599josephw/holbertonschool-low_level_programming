#include "main.h"
/**
 * flip_bits - returns a bit at an index
 * @n: the number given
 * @m: point in the array to change
 * Return: the converted number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	char a[32];
	unsigned int i = 0;
	int number, dec = 0, b = 0, rem;

	_itoa(*n, a, 2);

	while (i <= index)
	{
		if (i == index)
		{
			a[i] = '0';
		}
		i++;
	}

	number = atoi(a);

	while (number != 0)
	{
		rem = number % 10;
		number /= 10;
		dec += rem * power(2, b);
		++b;
	}

	*n = dec;

	return (1);
}
/**
 * _strrev - reverse the numbers from _itoa
 * @str: string of numbers passed from _itoa
 * Return: the corrected string
 */
char *_strrev(char *str)
{
	int i;
	int len = 0;
	char c;

	if (!str)
		return (NULL);
	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < (len / 2); i++)
	{
		c = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = c;
	}
	return (str);
}

/**
 * _itoa - convert integers to a string
 * @i: argument passed in
 * @strout: buffer passed in
 * @base: base of the number passed
 * Return: integers converted to a string
 */

char *_itoa(int i, char *strout, int base)
{
	char *str = strout;
	int digit, sign = 0;

	if (i < 0)
	{
		sign = 1;
		i *= -1;
	}
	while (i)
	{
		digit = i % base;
		*str = (digit > 9) ? ('A' + digit - 10) : '0' + digit;
		i = i / base;
		str++;
	}
	if (sign)
	{
		*str++ = '-';
	}
	*str = '\0';
	_strrev(strout);
	return (strout);
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

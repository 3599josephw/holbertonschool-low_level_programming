#include "main.h"
/**
 * get_bit - returns a bit at an index
 * @n: number given
 * @index: point in the array to return
 * Return: the converted integer
 */
int get_bit(unsigned long int n, unsigned int index)
{

	int binary[32];
	unsigned int i = 0;

	while (n > 0)
	{
		binary[i] = n % 2;
		n = n / 2;
		i++;
	}

	i = 0;
	while (i <= index)
	{
		if (i == index)
			return (binary[i]);
		i++;
	}

	return (-1);

}

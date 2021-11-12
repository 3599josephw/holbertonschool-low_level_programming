#include "main.h"
/**
 * get_bit - returns a bit at an index
 * @n: number given
 * @index: point in the array to return
 * Return: the converted integer
 */
int get_bit(unsigned long int n, unsigned int index)
{

	int bit;

	if (index > 31)
		return (-1);
	if (n == '\0')
		return (-1);

	bit = (n >> index) & 1;

	return (bit);


}

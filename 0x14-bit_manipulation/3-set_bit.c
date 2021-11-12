#include "main.h"
/**
 * set_bit - returns a bit at an index
 * @n: the number given
 * @index: point in the array to change
 * Return: the converted number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (*n == '\0' || index > 31)
		return (-1);

	*n = ((1 << index) | *n);
	return (1);
}

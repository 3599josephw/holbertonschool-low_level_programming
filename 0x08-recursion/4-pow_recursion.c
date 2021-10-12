#include "main.h"
/**
 * _pow_recursion - x raised to power of y
 * @x: number entered
 * @y: power to be raised to
 * Return: x to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	x = x * _pow_recursion(x, y - 1);
	return (x);
}

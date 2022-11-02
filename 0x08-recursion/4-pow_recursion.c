#include "main.h"

/**
 * _pow_recursion - calculate x raise to power y.
 * @x: the number to be raised
 * @y: the power of x
 *
 * Return: the power of x raised to y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return(1);
	return(x * (_pow_recursion(x, y - 1)));
}

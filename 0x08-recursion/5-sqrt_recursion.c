#include "main.h"

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - performs sqrt operation on an integer
 *
 * @n: the number whose sqrt to find.
 * Return: the sqrt
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (_sqrt(n, 0));
}
/**
 * sqrt - performs the actual operation
 * @n: the number to be sqare rooted
 * @i: iterates the funtion
 * Return: the real square root
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

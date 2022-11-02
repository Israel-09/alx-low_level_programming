#include "main.h"

/**
 * factorial - calculates the factorial of a given number.
 * @n: the number to be factored
 *
 * Return: the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}

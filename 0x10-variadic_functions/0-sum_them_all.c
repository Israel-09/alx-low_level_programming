#include "variadic_functions.h"

/**
 * sum_them_all - add up all the arguements.
 * @n: the number of arguementsp
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int unsigned i;
	int sum = 0;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += var_arg(list, int);
	}
	va_end(list);
	return (0);
}

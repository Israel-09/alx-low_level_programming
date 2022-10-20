
#include "main.h"

/**
 * print_diagonal - prints a diagonal n number of times
 * @n: number of times to prunt the diagonal
 */
void print_diagonal(int n)
{
	int i, j, k;

	k = 0;
	if (n > 0)
		{
		for (i = 1; i <= n; i++)
		{
			j = 0;
			while (j < k)
			{
				_putchar(' ');
				j++;
			}
			k += 2;
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}

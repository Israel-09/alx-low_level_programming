#include "main.h"

/**
 * print_triangle - prints triangle with respect to size
 * @size: is the size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)

				_putchar(' ');
			for (k = i; k > 0; k--)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}

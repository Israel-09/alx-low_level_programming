#include "main.h"

/**
 * print_triangle - prints triangle with respect to size
 * @size - is the size of the triangle
 */
void print_triangle(int size)
{
	int i,j,k;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (i < size)
			{
					_putchar(' ');
			}
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}

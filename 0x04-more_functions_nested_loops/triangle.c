#include <stdio.h>

/**
 * triangle - prints a triangle with respect to size
 * @size: determines the size of the triangle
 */

void triangle(int size);

int main(void)
{
	triangle(9);
	putchar('\n');
	triangle(7);
	putchar('\n');
	return (0);
}

void triangle(int size)
{
	int i, k, m;

	for (i = 1; i <= size; i++)
	{
		k = size - i;
		for(k = size - i; k > 0; k--)
		{
			putchar(' ');
		}
		for (m = i; m > 0; m--)
			putchar('#');
		putchar('\n');
	}
}

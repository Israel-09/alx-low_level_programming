#include "main.h"

/**
  * print_array - prints the elements of array
  * @n: element to print
  * @a: array
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1)
				printf(", ");
	}
	_putchar('\n');
}

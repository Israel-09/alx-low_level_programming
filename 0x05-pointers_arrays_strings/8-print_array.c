#include "main.h"

/**
  * print_array - prints the elements of array
  * @n: element to print
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d%s", a[i], i < ( - 1)? ", ":"");
	}
	_putchar('\n');
}

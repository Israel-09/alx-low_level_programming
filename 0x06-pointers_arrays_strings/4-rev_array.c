#include "main.h"

/**
 * reverse_array - reverses the elements if an intger array
 * @a: is the array to be reversed.
 * @n: is the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int b[n], i, j;
	for (i = 0; i < n; i++)
	{
		b[i] = a[i];
	}
	i -= 1;
	for (j = 0; j < n; j++)
	{
		a[j] = b[i];
	}
}

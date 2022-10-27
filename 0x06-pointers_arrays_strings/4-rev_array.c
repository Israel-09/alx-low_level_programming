#include "main.h"

/**
 * reverse_array - reverses the elements if an intger array
 * @a: is the array to be reversed.
 * @n: is the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int b[n];
	
	for (i = 0; i < n; i++)
	{
		b[i] = a[i];
	}
	printf("%d\n", a[2]);
	i -= 1;
	for (j = 0; j < n; j++ , i++)
	{
		a[j] = b[i];
	}
}

#include "main.h"

/**
 * print_diagsums - prints the sums of the diagonal of a square matrix
 * @a: the matrix
 * @size: the size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, ctr;
	int sum, sum1, diag, diag1;

	diag1 = size - 1;
	ctr = sum = sum1 = diag = 0;
	for (i = 0; i  < (size * size); i++)
	{
		if (i == diag)
		{
			sum += a[i];
			diag += size + 1;
		}
		if (i == diag1 && ctr < size)
		{
			sum1 += a[i];
			diag1 +=  size - 1;
			ctr += 1;
		}
	}
	printf("%d, %d\n", sum, sum1);
}

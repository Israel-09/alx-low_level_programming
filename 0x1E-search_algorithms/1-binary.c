#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * using the Binary search algorithm
 * @array: array to be searched.
 * @size: size of the array.
 * @value: value to find.
 *
 * Return: index of the value if found. otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	int l, r, mid, i;

	l = 0;
	r = (int)size - 1;

	while (l <= r)
	{

		mid = (l + r) / 2;

		printf("Searching in array: ");
		for (i = l; i <= r ; i++)
		{
			printf("%d%s", array[i], i < r ? ", " : "");
		}
		printf("\n");

		if (array[mid] > value)
			r = mid - 1;
		else if (array[mid] < value)
			l = mid + 1;
		else
			return (mid);
	}
	return (-1);
}

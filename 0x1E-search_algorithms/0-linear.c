#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: array to be searched.
 * @size: size of the array.
 * @value: value to find.
 *
 * Return: index of the value if found. otherwise -1.
 */

int linear_search(int *array, size_t size, int value)
{
	int index = 0;
	size_t i;

	for (i = 0; i < size; index++, i++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[i]);

		if (value == array[i])
		{
			return (index);
		}
	}

	return (-1);
}

#include "search_algos.h"
#include "math.h"

/**
 * jump_search - searches for a value in an array of integers
 * using the Jump search algorithm
 * @array: array to be searched.
 * @size: size of the array.
 * @value: value to find.
 *
 * Return: index of the value if found. otherwise -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t current, prev, i, step;

	if (!array)
		return (-1);
	step = sqrt(size);
	current = prev = 0;
	while (array[current] < value && current < size)
	{
		prev = current;
		current += step;
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, current);

	for (i = prev; i <= current && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

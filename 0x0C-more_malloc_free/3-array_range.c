#include "main.h"

/**
 * array_range - allocate memory for an array and store all digit min - max
 * @min: the smallest element in the array
 * @max: the biggest element in the array
 *
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int diff, i;
	int *array;

	if (min > max)
		return (NULL);
	diff = (max - min) + 1;
	array = malloc(sizeof(int) * diff);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < diff; i++)
	{
		array[i] = min;

		if (min == max)
			break;
		min++;
	}
	return (array);
}

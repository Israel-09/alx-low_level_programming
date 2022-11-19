#include "function_pointers.h"

/**
 * array_iterator - iterates an array and perfon action
 * on each element.
 * @array: the array to be manipulated
 * @size: is the size of the array
 * @action: funtion  to act on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

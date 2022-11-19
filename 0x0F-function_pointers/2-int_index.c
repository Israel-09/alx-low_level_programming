#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: is th array to be searched
 * @cmp: the function to perform comparision
 * @size: the size of the array.
 *
 * Return: the index of the value if succesful.
 * otherwise return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, chk;

	if (size <= 0 || !cmp || !array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		chk = cmp(array[i]);
		if (chk != 0)
		{
			return (i);
		}
	}
	return (-1);
}

#include "main.h"

/**
 * alloc_grid - create memory for a two dimensional array
 * @width: the width of the array
 * @height: the height of the array
 * Return: a pointer to a two dimensional array of integers
 */
int **alloc_grid(int height, int width)
{
	int **arr;
	int i, j;

	if (height < 0 || width < 0)
		return (NULL);
	arr = malloc(sizeof(int) * width * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}

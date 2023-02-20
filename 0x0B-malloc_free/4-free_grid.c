#include "main.h"

/**
 * free_grid - frees a two dimensional array
 * @grid: pointer to the grid
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int i, j;

	if (grid == NULL || height <= 0)
		return;
	for (i = height; i >= 0; i--)
	{
		free(*(grid + i));
	}
	free(grid);
}

#include "main.h"
#include <stdlib.h>

/**
 * free_grid - opop
 * @grid: opppo
 * @height: p
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}

	free(grid);
}

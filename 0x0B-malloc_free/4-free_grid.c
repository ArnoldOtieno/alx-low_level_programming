#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - freees a 2d grid previously
 * created by function alloc_grid
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}

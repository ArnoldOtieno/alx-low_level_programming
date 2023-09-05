#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a 2d array
 * of integers
 * @width: width of the array
 * @height: height of the array
 * Return: returns null on failure
 */
int **alloc_grid(int width, int height)
{
	int **loc;
	int j, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	loc = malloc(sizeof(int *) * height);
	if (loc == NULL)
		return (NULL);
	for (j = 0; j < height; j++)
	{
		loc[j] = malloc(sizeof(int) * width);
		if (loc[j] == NULL)
		{
			for (;j >= 0; j--)
				free(loc);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			loc[j][k] = 0;
	}
	return (loc);
}

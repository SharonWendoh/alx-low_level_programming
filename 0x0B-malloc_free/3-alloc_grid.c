#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers
 *
 * @width: Width of the grid
 * @height: Height of the grid
 *
 * Return: Pointer to 2D array of integers or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **t;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	t = malloc(sizeof(int) * height);
	if (t == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		t[i] = malloc(sizeof(int) * width);
		if (t[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(t[j]);
			}
			free(t);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			t[i][j] = 0;
		}
	}
	return (t);

}

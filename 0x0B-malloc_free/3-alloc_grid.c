#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int z, q, x, r;
	int **o;

	if (width <= 0 || height <= 0)
		return (NULL);

	o = malloc(sizeof(int *) * height);

	if (o == NULL)
	{
		free(o);
		return (NULL);
	}

	for (z = 0; z < height; z++)
	{
		o[z] = malloc(sizeof(int) * width);

		if (o[z] == NULL)
		{
			for (q = z; q >= 0; q--)
			{
				free(o[q]);
			}

			free(o);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (r = 0; r < width; r++)
		{
			o[x][r] = 0;
		}
	}

	return (o);
}

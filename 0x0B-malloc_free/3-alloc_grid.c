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
	int **array;
	int q, z;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);
	for (q = 0; q < height; q++)
	{
		array[q] = (int *) malloc(sizeof(int) * width);
		if (array[q] == NULL)
		{
			free(array);
			for (z = 0; z <= 1; z++)
				free(array[z]);
			return (NULL);
		}
	}

	for (q = 0; q < height; q++)
	{
		for (z = 0; z < width; z++)
		{
			array[q][z] = 0;
		}
	}
	return (array);
}

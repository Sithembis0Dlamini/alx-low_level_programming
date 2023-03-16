#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of  integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
	int *z;
	int i, size;

	if (min > max)
		return (NULL);

	size = man - min + 1;

	z = malloc(sizeof(int) * size);

	if (z == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		z[i] = min++;
	return (z);
}

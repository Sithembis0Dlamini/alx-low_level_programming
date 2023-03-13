#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *ccc;
	int l, q = 0;

	if (str == NULL)
		return (NULL);
	l = 0;
	while (str[l] != '\0')
		l++;

	ccc = malloc(sizeof(char) * (l + 1));

	if (ccc == NULL)
		return (NULL);

	for (q = 0; str[q]; q++)
		ccc[q] = str[q];
	return (ccc);
}

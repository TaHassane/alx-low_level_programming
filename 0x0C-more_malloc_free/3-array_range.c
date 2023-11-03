#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: min int
 * @max: max int
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int l, i;
	int *p;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	p = malloc(sizeof(int) * l);

	if (!p)
		return (NULL);

	for (i = 0; i < l; i++)
		p[i] = min++;

	return (p);
}

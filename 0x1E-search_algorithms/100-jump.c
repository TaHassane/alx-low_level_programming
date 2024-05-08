#include "search_algos.h"
#include <math.h>

/**
 * jp_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: array search in
 * @size: size
 * @value: value
 *
 * Return: first index where value is located OR -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jp;
	size_t prv;
	size_t cr;

	if (array == NULL)
		return (-1);

	jp = sqrt(size);
	prv = 0;
	cr = jp;

	printf("Value checked array[%ld] = [%d]\n", prv, array[prv]);
	while (cr < size && array[cr] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", cr, array[cr]);
		prv = cr;
		cr += jp;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prv, cr);

	if (cr >= size)
		cr = size - 1;

	while (prv <= cr)
	{
		printf("Value checked array[%ld] = [%d]\n", prv, array[prv]);
		if (array[prv] == value)
			return (prv);

		prv++;
	}

	return (-1);
}


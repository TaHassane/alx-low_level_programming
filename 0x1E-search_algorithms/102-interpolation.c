#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: array search in
 * @size: size
 * @value: value
 *
 * Return: first index where value is located OR -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t min = 0;
	size_t max = size - 1;
	size_t pos;
	size_t mm;
	int rh;

	if (!array || !value)
		return (-1);

	while (min <= max && array[min] <= value && array[max] >= value)
	{
		mm = max - min;
		rh = array[max] - array[min];
		pos = min + (((double)(mm) / (rh)) * (value - array[min]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			min = pos - 1;
		else
			min = pos + 1;
	}

	return (-1);
}

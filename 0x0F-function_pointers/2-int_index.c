#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of int
 * @size: size of the array
 * @cmp: function to compare with
 *
 * Return: int we are searching for
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (size > i)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}

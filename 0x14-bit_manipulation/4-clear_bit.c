#include "main.h"

/**
 * clear_bit - function that sets the value of a bit
 * to 0 at a given index.
 * @n: input
 * @index: input
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & x)
		*n ^= x;

	return (1);
}

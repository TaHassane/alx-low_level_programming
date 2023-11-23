#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 * to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	int l, bin;

	if (!b)
		return (0);

	x = 0;

	for (l = 0; b[l] != '\0'; l++)
		;

	for (l--, bin = 1; l >= 0; l--, bin *= 2)
	{
		if (b[l] != '0' && b[l] != '1')
		{
			return (0);
		}

		if (b[l] & 1)
		{
			x += bin;
		}
	}

	return (x);
}

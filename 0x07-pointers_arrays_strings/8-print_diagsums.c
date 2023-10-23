#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
* print_diagsums - function that prints the sum of the two diagonals of a square matrix of integers.
* @a: array
* @size: size of array
* Return:  returns 0 (nothing expected)
*/
void print_diagsums(int *a, int size)
{
	int i, x, y;
	i = x = y = 0;

	for (i = 0; i < size; i++)
	{
		x += a[i];
		y += a[size - i - 1];
		a += size;
	}

	printf("%d, " x);
	printf("%d\n, " y);

}


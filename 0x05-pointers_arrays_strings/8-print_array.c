#include <stdio.h>
#include "main.h"

/**
* print_array - prints n elements of an array of integers,
* followed by a new line
* @a: input 1
* @n: input 2
* Return: 0 (success)
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}

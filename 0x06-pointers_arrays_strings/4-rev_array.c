#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
* reverse_array - function that concatenates two strings
* @a: input
* @n: the number of elements of the array
* Return: no return
*/
void reverse_array(int *a, int n)
{

	int x, y, z;

	for (x = 0, y = (n - 1); x < y; x++, y--)
	{
		z = a[x];
		a[x] = a[y];
		a[y] = z;
	}


}

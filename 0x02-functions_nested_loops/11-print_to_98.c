#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_to_98 -  prints numbers from n to 98 and  a new line.
 * @n : input
 * Return :0 success
 */

void print_to_98(int n)
{
	int c;

	if (n > 98)
		for (c = n; c > 98; c--)
			printf("%d, ", c);
	else
		for (c = n; c < 98; c++)
			printf("%d, ",  c);
	printf("98\n");
}

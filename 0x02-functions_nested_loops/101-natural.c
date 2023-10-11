#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: computes and prints the sum of all the multiple 3 5 1024
 *
 * Return : always returns 0
 */

int main(void)
{
	int s, n;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			s += n;
	}
	prontf("%d\n", sum);
	return (0);
}

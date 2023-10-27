#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _abs -  computes the absolute value of an integer.
 * @n: checks input
 *
 * Return:  always n (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}

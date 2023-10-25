#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
* _sqrt_recursion - that returns the natural square root
* of a number
* @n: the number
* @x: square root
* Return: the result
*/

int sqr(int n, int x);
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}

/**
* sqr - that returns the natural square root
* of a number
* @n: the number we need to square
* @x: the number to check if it's a square root
* Return: the result
*/

int sqr(int n, int x)
{

	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (sqr(n, x + 1));
	else
		return (-1);
}

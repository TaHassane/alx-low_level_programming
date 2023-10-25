#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
* _pow_recursion - function that returns the value of x
* raised to the power of y.
* @x: the number
* @y: the power of which x should be increased by
* Return: the result
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));

}

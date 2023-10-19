#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
* print_number -  prints an integer.
* @n: input
* Return: nothing
*/
void print_number(int n)
{

	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		x = n;
	}
	if (x / 10 != 0)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + '0');
}


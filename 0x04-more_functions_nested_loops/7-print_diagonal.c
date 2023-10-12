#include <stdio.h>
#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal.
* @n:  n is the number of times the character \ should be printed
* Return: 0 (success)
*/

void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		for (; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
	}
	else
	_putchar('\n');
}

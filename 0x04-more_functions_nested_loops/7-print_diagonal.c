#include <stdio.h>
#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal.
* @n:  n is the number of times the character \ should be printed
* Return: 0 (success)
*/

void print_diagonal(int n)
{
	int i, j;

	for (i = 1 ; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}

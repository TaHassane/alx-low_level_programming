#include <stdio.h>
#include "main.h"

/**
* print_line - draws a straight line in the terminal.
* @n:  number of times the character _ should be printed
* Return: 0 (success)
*/

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

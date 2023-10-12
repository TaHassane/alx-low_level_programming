#include <stdio.h>
#include "main.h"

/**
* print_most_numbers -  prints from 0 to 9
* (except 2 and 4) and a new line.
* Return: 0 (success)
*/

void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			_putchar( i + 48);
	}
	_putchar('\n');
}

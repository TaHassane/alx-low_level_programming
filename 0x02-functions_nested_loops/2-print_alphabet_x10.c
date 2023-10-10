#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times a - z, followed by a new line
 *
*/
void print_alphabet_x10(void)
{
	int i, alph;

	for (i = 0; i <= 9; i++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
		_putchar(alph);
		}
	_putchar('\n');
	}
}

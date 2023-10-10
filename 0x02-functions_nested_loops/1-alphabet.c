#include "main.h"

/**
 *print_alphabet -  prints the alphabet, in lowercase, followed by a new line.
 *	a - z lower case
 */

void  print_alphabet(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar ('\n');
}

#include <stdio.h>
#include "main.h"

/**
* print_number - prints an integer.
* @n:  input
* Return: 0 (success)
*/

void print_number(int n)
{
	unsigned int nb = n;

	if (n < 0)
	{
		_putchar('-');
		nb = -nb;
	}
	if ((nb / 10) > 0)
		print_number(nb / 10);

	_putchar((num % 10) + 48;
}

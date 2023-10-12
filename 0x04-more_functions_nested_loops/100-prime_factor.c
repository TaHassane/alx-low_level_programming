#include <stdio.h>
#include "main.h"

/**
* _sroot - for the square root
* @x: input
* * Return: qr (root square of x)
*
*/

double _sroot(double x)
{
	float qr, n;

	qr = x / 2;
	n = 0;

	while (qr != n)
	{
		n = qr;
		qr = (x / n + n) / 2;
	}
	return (qr);
}

/**
* largest_prime_factor - for the square root
* @nb: input
* * Return:0 succes
*/

void largest_prime_factor(long int nb)
{
	int pn, l;

	while (nb % 2 == 0)
		nb = nb / 2;
	for (pn = 3; pn <= _sroot(nb); pn += 2)
	{
		while (nb % pn == 0)
		{
			nb = nb / pn;
			l = pn;
		}
	}
	if (nb > 2)
		l = nb;
	printf("%d\n", l);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}

#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, s;
	float t;

	while (1)
	{
		s = fib1 + fib2;

		if (s > 4000000)
			break;
		if ((s % 2) == 0)
			t += s;
		fib1 = fib2;
		fib2 = s;
	}
	printf("%.0f\n", t);
	return (0);
}

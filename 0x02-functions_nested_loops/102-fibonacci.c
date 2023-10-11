#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int c;
	unsigned long fic1 = 0, fib2 = 1, s;

	for (c = 0; c < 50; c++)
	{
		s = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = s;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}

#include "main.h"

/**
 * numLength - returns the length of string
 *
 * @num : operand number
 *
 * Return: number of digits
 */

int numLength(int num)
{
	int length = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int c, i;
	unsigned long s, f1 = 1, f2 = 2, max = 100000000, f1o = 0, f2o = 0, so = 0;

	for (c = 1 ; c <= 98; c++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		i = numLength(max) - 1 - numLength(f1);
		while (f1o > 0 && i > 0)
		{
			printf("%d", 0);
			i--;
		}
		printf("%lu", f1);
		s = (f1 + f2) % max;
		so = f1o + f2o + (f1 + f2) / max;
		f1 = f2;
		f1o = f2o;
		f2 = s;
		f2o = so;
		if (c != 98)
			printf(", ");
		else
			printf("\n");
	}
return (0);
}

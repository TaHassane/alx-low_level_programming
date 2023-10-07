#include <stdio.h>

/**
 * main - all possible different combinations of one digit
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
	putchar(x);
	if (x != 57)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
	}

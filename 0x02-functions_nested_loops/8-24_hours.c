#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return:   0 (success)
*/

void jack_bauer(void)
{
	int min, h;

	for (h = 0; h <= 23; h++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((h / 10) + 48);
			_putchar((h % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}

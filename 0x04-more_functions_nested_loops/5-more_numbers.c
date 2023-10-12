#include <stdio.h>
#include "main.h"

/**
* more_numbers -  prints 10 times the numbers, from 0 to 14
* followed by a new line
* Return: 0 (success)
*/

void more_numbers(void)
{
	int line, i, j;
	for (line = 0; line <= 9; line++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(1 + 48);
				j = i % 10;
				_putchar(j + 48);
			}
		else
			_putchar(i + 48);
		}
		_putchar('\n');
	}
}

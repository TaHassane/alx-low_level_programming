#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
* print_chessboard - function that prints the chessboard.
* @a: rows
* Return:  returns 0 (nothing expected)
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (i = 0; i < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}


}


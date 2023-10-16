#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
* main - check code 
* Return: 0 success
*/
int main(void)
{

	int sum;
	char c;

	strand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}

	putchar(2772 - sum);

	return (0);


}

#include <stdio.h>
#include "main.h"

/**
* _atoi - convert a string to an integer.
* @s:input 1
* Return: the buffer pointed to by dest
*/
int _atoi(char *s)
{

	unsigned int n = 0;
	int sn = 1;

	do {
		if (*s == '-')
			sn *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);

	return (n * sn);


}

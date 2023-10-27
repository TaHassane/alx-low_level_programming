#include <stdio.h>
#include "main.h"

/**
* _isupper - checks for uppercase character
* left in the year, taking leap years into account
* @c: caracter to check
* Return: 1 if c is uppercase Returns 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);

}

#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
* *_memset -  if n is printable or not
* @s: output
* @b: constant byte
* @n: bytes of the memory area pointed to
* Return: constant byte
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++; n--)
	{
		s[i] = b;
	}

	return (s);
}


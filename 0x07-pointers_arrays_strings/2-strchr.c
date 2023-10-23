#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
* *_memset -  if n is printable or not
* @s: string we are working with
* @c: char we looking for
* Return: the first occurrence of the character
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return(s + i);
		}

		return ('\0');
	}
}

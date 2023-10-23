#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
* *_strpbrk - function that searches a string for any of a set of bytes
* @s: input string provides occurences
* @accept: input string to look into
* Return:  a pointer to the byte in s that matches one of the bytes in accept
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;

	while (s[i] == '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);

			}
			j++;
		}
		i++;
	}

	return (0);
}

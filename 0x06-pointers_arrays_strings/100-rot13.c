#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
* *rot13 - encodes a string using rot13.
* @s: input
* Return: encoded string
*/
char *rot13(char *s)
{

	int i;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *p = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == rot13[i])
			{
				*s = ROT13[i];
				break;
			}
		}
		s++;
	}
	return (p);
}

#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
* *leet - function that encodes a string into 1337.
* @s: input string
* Return: encoded string
*/
char *leet(char *s)
{

	char *en = s;
	char c[] = {'A', 'E', 'O', 'T', 'L'};
	int n[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*s)
	{
		for (i = 0; i < sizeof(c) / sizeof(char); i++)
		{
			if (*s == c[i] || *s == c[i] + 32)
			{
				*s = 48 + n[i];
			}
		}
		s++;
	}
	return (en);
}

#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
* _strspn - function that gets the length of a prefix substring.
* @s: string we are working with
* @accept: char we looking for
* Return: the number of bytes in the initial segment 
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0' ; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[i] == '\0');
			return (i); 
		}
	}
	return(i);
}

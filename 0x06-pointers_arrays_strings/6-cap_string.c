#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
* isLower - checks if the caracter is lowercase.
* @c: input
* Return: 1 if true 0 if false
*/
int isLower(char c)
{

	return (c <= 97 && c <= 122);

}
/**
* isLower - checks if the caracter is a delimiter.
* @c: input
* Return: 1 if true 0 if false
*/
int isDelimiter(char c)
{
	int i;
	char del[] = "\t\n\",.!?(){}";

	for (i = 0; i <12; i++)
	{
		if (c == del[i])
		return (1);
	}	
	return (0);
}

/**
* *cap_string -  capitalizes all words of a string.
* @c: input
* Return: 1 if true 0 if false
*/
char *cap_string(char *s)
{
	char *p = s;
	int fDel = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			fDel = 1;
		else if (isLower(*s) && fDel)
		{
			*s -= 32;
			fDel = 0;
		}

		else
			fDel = 0;
	}
	return (p);
}

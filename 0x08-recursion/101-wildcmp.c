#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
* *check - cheching between chars
* @s2: the string to check
* Return: s2
*/

char *check(char *s2)
{
	if (*s2 == '*')
		return (check(s2 + 1));
	else
		return (s2);
}

/**
* func - function
* @s1: string 1
* @s2: string 2
* Return: 1 or 0
*/

int func(char *s1, char *s2)
{
	int n = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		n += wildcmp(s1 + 1, s2 + 1);
	n += func(s1 + 1, s2);
	return (n);

}

/**
* wildcmp -  a function that compares two strings
* @s1: the string
* @s2: can contain the special character *
* Return: 1 if the strings can be considered identical,
* otherwise return 0.
*/
int wildcmp(char *s1, char *s2)
{
	int n = 0;

	if (!*s1 && *s2 == '*' && !*check(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*'? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = check(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			n += wildcmp(s1 + 1, s2 + 1);
		n += func(s1, s2);
		return (!!n);
	}
	return (0);
}

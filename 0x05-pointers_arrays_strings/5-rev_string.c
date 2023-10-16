#include <stdio.h>
#include "main.h"

/**
* rev_string - prints a string, in reverse, followed by a new line.
* @s: input 1
* Return: 0 (success)
*/
void rev_string(char *s)
{
	int l, i;
	char rev;

	for (l = 0; s[l] != '\0'; ++l)
		;

	for (i = 0; i < l / 2; i++)
	{
		rev = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = rev;
	}
}

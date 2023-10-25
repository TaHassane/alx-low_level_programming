#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
* last - return the last position in a the string
* @s: the strin
* @deb: cursor from left
* @fin: cursor from right
* @x: int
* Return: last position
*/

int pal(char *s, int deb, int fin, int x);
int is_palindrome(char *s);
int last(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last(s + 1) + 1;
	return (n);
}

/**
* is_palindrome - that checks if the number is a palindrome
* @s: the string
* Return: returns 1 if a string is a palindrome and 0 if not
*/

int is_palindrome(char *s)
{
	int fin = last(s);

	return (pal(s, 0, fin - 1, fin % 2));
}

/**
* pal - that checks if the number is a palindrome
* @s: the string
* @deb: cursor from left
* @fin: cursor from right
* @x: int
* Return: returns 1 if a string is a palindrome and 0 if not
*/
int pal(char *s, int deb, int fin, int x)
{
	if ((deb == fin && x != 0) || (deb == fin + 1 && x == 0))
		return (1);
	else if (s[deb] != s[fin])
		return (0);
	return (pal(s, deb + 1, fin - 1, x));
}

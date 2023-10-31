#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * count - count the number of words in a string
 * @s: string
 *
 * Return: number of words
 */
int count(char *s)
{
	int flag, i, j;

	flag = 0;
	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			j++;
		}
	}

	return (j);
}
/**
 * **strtow - string to words
 * @str: string
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **x, *c;
	int i, k = 0, l = 0, words, c = 0, deb, fin;

	while (*(str + l))
		l++;
	words = count(str);
	if (words == 0)
		return (NULL);

	x = (char **) malloc(sizeof(char *) * (words + 1));
	if (x == NULL)
		return (NULL);

	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				fin = i;
				c = (char *) malloc(sizeof(char) * (c + 1));
				if (c == NULL)
					return (NULL);
				while (deb < fin)
					*c++ = str[deb++];
				*c = '\0';
				x[k] = c - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			deb = i;
	}

	x[k] = NULL;

	return (x);
}


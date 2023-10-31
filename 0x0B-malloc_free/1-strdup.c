#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *c;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	c = malloc(sizeof(char) * (i + 1));

	if (c == NULL)
		return (NULL);

	for (rj = 0; str[j]; j++)
		c[j] = str[j];

	return (c);
}



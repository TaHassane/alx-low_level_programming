#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
* *_strncpy- function that concatenates two strings
* @dest: pointer to dest
* @src: pointer to input
* @n: number of carachters to add
* Return: string dest
*/
char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i] != 0; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);

}

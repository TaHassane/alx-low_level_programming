#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
* *_strncat - function that concatenates two strings
* @dest: pointer to dest
* @src: pointer to input
* @n: number of carachters to add
* Return: string dest
*/
char *_strncat(char *dest, char *src, int n)
{

	int i, j;

	i = 0;
	for (i = 0; dest[i] != 0; i++)
		;

	for (j = 0; j < n && src[j]; j++)
		dest[i + j] = src[j];

	dest [i +j] = '\0';

	return (dest);

}

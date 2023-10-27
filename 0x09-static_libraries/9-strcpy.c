#include <stdio.h>
#include "main.h"

/**
* *_strcpy - copies the string pointed to by src,
* including the terminating null byte (\0),
* to the buffer pointed to by dest.
* followed by a new line
* @dest: input 1
* @src: input 2
* Return: the buffer pointed to by dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);

}

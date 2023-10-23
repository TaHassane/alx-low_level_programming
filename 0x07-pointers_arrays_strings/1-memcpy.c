#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
* *_memcpy - a function that copies memory area.
* @dest: output
* @src: input od chars to be changed with
* @n: bytes of the memory area pointed to
* Return: new pointed to the new string of chars
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n ; i++)
{
dest[i] = src[i];
}

return (dest);
}

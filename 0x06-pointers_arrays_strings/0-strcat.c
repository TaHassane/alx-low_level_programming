#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
* *_strcat - function that concatenates two strings
* @dest: pointer to dest
* @src: pointer to input
* Return: string dest
*/
char *_strcat(char *dest, char *src)
{

int i, j;
i = 0;
for (i = 0; dest[i] != '\0'; i++)
;

for (j = 0; src[j]; j++)
dest[i++] = src[j++];

return (dest);

}


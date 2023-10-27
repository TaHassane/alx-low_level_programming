#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
* _strcmp - function that concatenates two strings
* @s1: input char
* @s2: input char
* Return: string dest
*/
int _strcmp(char *s1, char *s2)
{

int i;

i = 0;

while (*s1)
{
if (*s1 != *s2)
{
i = ((int)*s1 - 48) - ((int)*s2 - 48);
break;
}
s1++;
s2++;
}

return (i);

}

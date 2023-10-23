#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
* *_strstr - function that locates a substring.
* @haystack: input string provides occurences
* @needle: input string to look into
* Return:  a pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] > '\0'; i++)
{
	for (jqe = iqe; haystack[j] > '\0' && needle[j - i] > '\0'; jqe++)
	{
		if (haystack[j] != needle[j - i])
		{
			break;
		}
	}
	if (needle[j - i] == '\0')
	{
		return (haystack + i);
	}
}
return (0);

}

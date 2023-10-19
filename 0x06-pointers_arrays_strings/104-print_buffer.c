#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
* isPrintableAscii -  if n is printable or not
* @n: input
* @size: 
* Return: 1 if true 0 otherwise
*/
int isPrintableAscii (int n)
{
	return (n >= 32 && n <= 126);
}

/**
* PrintH -  print value
* @x: input
* @deb: starting pos
* @fin: ending pos
* Return: ending position
*/
void PrintH(char *b, int deb, int fin)
{
	int i = 0;
	
	while (i < 10)
	{
		if (i < fin)
			printf("%02x", *(b + deb + i));
		else
			printf(" ");
		if (i % 2)
			printf(" ");
		i++;
	}

}

/**
* PrintAscii - print ASCII value
* @n: input
* @size: 
* Return: 1 if true 0 otherwise
*/
void PrintAscii (char *b, int deb, int fin)
{
	int ch, i = 0;
	
	while (i < fin)
	{
		ch = *(b + i + deb);
		if (!isPrintableAscii(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}


/**
* *infinite_add -  adds two numbers.
* @b: input
* @size: 
* Return: nothing
*/
void print_buffer(char *b, int size)
{
	int deb, fin;
	
	if (size > 0)
	{
		for (deb = 0; deb < size; deb += 10)
		{
			fin = (size -deb < 10) ? size - deb : 10;
			printf("%08x: ", deb);
			PrintH(b, deb, fin);
			PrintAscii(b, deb, fin);
			printf("\n");
		}
	} else
		printf("\n");


}

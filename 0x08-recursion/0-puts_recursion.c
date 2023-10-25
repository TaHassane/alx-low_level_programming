#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
* _puts_recursion -  function that prints a string
* followed by a new line.
* @s: string to input 
* Return: nothing to be returned
*/
void _puts_recursion(char *s)
{
	if (*s == '\0');
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_putchar(s+1);
	}
}

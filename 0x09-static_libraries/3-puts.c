#include <stdio.h>
#include "main.h"

/**
* _puts - prints a string, followed by a new line, to stdout
* @str: input 1
* Return: 0 (success)
*/
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');


}

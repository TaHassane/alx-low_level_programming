#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the carachter c to stdout
 * c: the charachter to print
 * Return: 1 on succes -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

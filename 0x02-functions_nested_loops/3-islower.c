#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 *_islower - Write a function that checks for lowercase character.
 * @c: input fuction
 * Return: returns 1 is c is lowercase
 *  otherwise always 0 (success)
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	return (0);
}

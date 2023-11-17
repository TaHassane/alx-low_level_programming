#include <stdio.h>

/**
 * bmain - function executed before main
 * Return: nothing
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}

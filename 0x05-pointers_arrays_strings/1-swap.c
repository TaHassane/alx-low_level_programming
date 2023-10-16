#include <stdio.h>
#include "main.h"

/**
* swap_int - swaps the values of two integers.
* @a: input 1
* @b: input 2
* Return: 0 (success)
*/
void swap_int(int *a, int *b)
{
int n;

n = *a;
*a = *b;
*b = n;

}

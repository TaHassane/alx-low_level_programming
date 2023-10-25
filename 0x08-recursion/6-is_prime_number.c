#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
* is_prime_number- that checks if the number is a prime number
* @n: the number
* @x: number to check with
* Return: 1 if the input integer is a prime number,
* otherwise return 0
*/

int prime(int n, int x);
int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
* prime - that checks if the number is a prime number
* @n: the number
* @x: number to check with
* Return: x
*/

int prime(int n, int x)
{
	if (x >= n && n > 1)
		return (1);
	else if (n % x == 0 || n <= 1)
		return (0);
	return (prime(n, x + 1));
}

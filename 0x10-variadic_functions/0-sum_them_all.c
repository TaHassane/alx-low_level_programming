#include "variadic_functions.h"

/**
* sum_them_all - sum numbers
* @n: number of arguments
* @...: the numbers to sum.
*
* Return: sum of number given
*/

int sum_them_all(const unsigned int n, ...)

{
	va_list l;
	int i, sum = 0;

	va_start(l, n);
	i = n;
	while(i--)
		sum += va_arg(l, int);

	va_end(l);

	return (sum);
}

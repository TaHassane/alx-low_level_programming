#include "variadic_functions.h"

/**
* print_numbers - Prints numbers
* @separator: seperator between numbers
* @n: The number of args
* @...: numbers to print
* Returns: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list l;
	unsigned int i = n;

	va_start(l, n);

	while (i--)
	{
		printf("%d", va_arg(l, int));
		if (i != 0 && separator != NULL)
			printf("%s", separator);

	}

	printf("\n");

	va_end(l);
}

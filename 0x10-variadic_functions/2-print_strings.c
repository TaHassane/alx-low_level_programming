#include "variadic_functions.h"

/**
* print_string - prints string, followed by a new line.
* @separator: separator between strings
* @n: the number of args
* @...: strings to print
* Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list l;
	char *s;
	unsigned int i = n;

	va_start(l, n);

	while (i--)
	{
		s = va_arg(l, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != 0 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(l);
}

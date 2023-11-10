#include "variadic_functions.h"

/**
* print_l - prints l, followed by a new line.
* @separator: separator between l
* @n: the number of args
* @...: l to print
* Return: nothing
*/
void print_l(const char *separator, const unsigned int n, ...)
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

#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
* main - main funtion to print with
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: nothing.
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int a, b;
	char *symb;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	symb = argv[2];
	b = atoi(argv[3]);

	if (get_op_func(symb) == NULL || symb[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*symb == '/' && b == 0) || (*symb == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(symb)(a, b));

	return (0);
	}

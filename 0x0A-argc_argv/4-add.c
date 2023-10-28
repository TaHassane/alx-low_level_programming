#include <stdlib.h>
#include <stdio.h>

/**
* main - sum of args
* @argc: int
* @argv: array
* Return: 0 if arguments are given correcty
*/
int main(int argc, char const *argv[])
{
	int i, n = 0;
	(void) argv;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			return (printf("Error\n"), 1);
		}
		else
		{
			n += atoi(argv[i]);
		}
	}

	printf("%d\n", n);
return (0);

}

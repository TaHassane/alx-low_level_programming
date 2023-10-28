#include <stdlib.h>
#include <stdio.h>

/**
 * main - sum of positive numbers
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 * Return: 0 if arguments are given correctly
 */
int main(int argc, char *argv[])
{
	int i, n = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		int j = 0;

		while (arg[j] != '\0')
		{
			if (arg[j] < '0' || arg[j] > '9')
			{
				return (printf("Error\n"), 1);
			}
		j++;
		}

		n += atoi(arg);
	}

	printf("%d\n", n);
	return (0);
}

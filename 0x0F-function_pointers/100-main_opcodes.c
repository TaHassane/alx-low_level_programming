#include <stdio.h>
#include <stdlib.h>

/**
* main - a program that prints the opcodes of
* its own main function
* @argc: number of arguments
* @argv: array of arguments
* Return: nothing
*/

int main(int argc, char *argv[])
{
	int x, i;
	char *p = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	x = atoi(argv[1]);

	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < x; i++)
	{
		if (i == x - 1)
		{
			printf("%02hhx\n", p[i]);
			break;
		}
		printf("%02hhx ", p[i]);
	}
	return (0);
}

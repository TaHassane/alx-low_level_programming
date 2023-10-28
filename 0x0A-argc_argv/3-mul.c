#include <stdlib.h>
#include <stdio.h>

/**
* main - mul of argc
* @argc: int
* @argv: array
* Return: 0 if 2 arguments are given otherwise 2
*/
int main(int argc, char const *argv[])
{
	int n = 0;

	if (argc == 3)
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", n);
	}

	else
	{
		printf("Error\n");
		return (-1);
	}
	return (0);

}

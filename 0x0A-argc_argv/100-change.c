#include <stdlib.h>
#include <stdio.h>

/**
* main - prints the minimum number of coins to make
* change for an amount of money.
* @argc: int
* @argv: array
* Return: 0 succes otherwise fail 
*/

int main(int argc, char const *argv[])
{

	if (argc == 2)
	{
		int i, change = atoi(argv[1]), n = 0;
		int pieces[] = {25, 10, 5, 2, 1};

		for (i = 0, i < 5, i++)
		{
			if (change >= pieces[i])
			{
				n += change / pieces[i];
				change = change % pieces[i];
				if (change % pieces[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", n);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return(0);
}

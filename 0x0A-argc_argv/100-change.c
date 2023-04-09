#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins to change
 * @argc: Argument count
 * @argv: Argument vector, array of arguments.
 * Return: 0 if successful, 1 if error occur
 */


int main(int argc, char *argv[])
{
	int ncoin = 0;
	int i = 0, cents;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc == 1)
	{
		printf("Error\n");

		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");

		return (0);
	}

	for (i = 0; coins[i] != '\0' && cents != 0; i++)
	{
		ncoin += cents / coins[i];
		cents %= coins[i];
	}
	printf("%d\n", ncoin);

	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the opcodes of its own main function.
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, ind;
	char *a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	a = (char *)main;

	for (ind = 0; ind < bytes; ind++)
	{
		if (ind == bytes - 1)
		{
			printf("%02hhx\n", a[ind]);
			break;
		}
		printf("%02hhx ", a[ind]);
	}
	return (0);
}

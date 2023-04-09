#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers.
 * @argc: Argument count
 * @argv: Argument vector, array of arguments.
 *
 * Return: 0 if successful, 1 if error occur.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int b, f;

	if (argc == 1)
		sum = 0;
	else
		for (b = 1; b < argc; b++)
		{
			for (f = 0; argv[b][f] != '\0'; f++)
			{
				if (!isdigit(argv[b][f]))
				{
					printf("Error\n");

					return (1);
				}
			}
			sum += atoi(argv[b]);
		}
	printf("%d\n", sum);

	return (0);
}

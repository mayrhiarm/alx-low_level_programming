#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 * @argc: Argument count
 * @argv: Argument vector, array of arguments.
 *
 * Return: 0 if successful, 1 if error occur.
 */

int main(int argc, char *argv[])
{
	int product, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	product = num1 * num2;

	printf("%d\n", product);

	return (0);
}

#include <stdio.h>

/**
 * print_array - a function that prints n element of an array of integers
 *
 * @a: the array of integers parameter
 * @n: the number of elements of the array to be printed
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}

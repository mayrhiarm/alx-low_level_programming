#include <stdlib.h>
#include "main.h"

/**
 * *array_range - a function that creates an array of integers.
 * @min: the minimum value
 * @max: the maximum value
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *m;

	int n, size;

	if (min > max)

		return (NULL);

	size = max - min + 1;

	m = malloc(sizeof(int) * size);

	if (m == NULL)

		return (NULL);

	for (n = 0; min <= max; n++)

		m[n] = min++;

	return (m);
}

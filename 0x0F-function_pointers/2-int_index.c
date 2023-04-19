#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array
 * @size: the size of the array
 * @cmp:  a pointer to the function to be used to compare values
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int z;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (z = 0; z < size; z++)
	{
		if (cmp(array[z]))
		return (z);
	}
	return (-1);
}

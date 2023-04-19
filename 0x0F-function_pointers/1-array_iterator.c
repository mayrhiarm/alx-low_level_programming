#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that executes a function given
 * array: array
 * @size: the size of the array
 * @action: a pointer to the function you need to use
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}

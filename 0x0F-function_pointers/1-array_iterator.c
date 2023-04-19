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
	size_t a;

	if (array && action)

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}

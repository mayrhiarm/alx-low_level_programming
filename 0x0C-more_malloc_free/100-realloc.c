#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in byte of the allocated space
 * @new_size: is the new size in bytes of the new memory block
 * Return: a pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n_ptr;
	char *f;
	unsigned int h;

	if (new_size == old_size)
		return (n_ptr);
	if (new_size == 0 && n_ptr)
	{
		free(n_ptr);
		return (NULL);
	}
	if (!n_ptr)
		return (malloc(new_size));
	n_ptr = malloc(new_size);
	if (!n_ptr)
		return (NULL);
	f = n_ptr;
	if (new_size < old_size)
	{
		for (i = 0; h < new_size; h++)
			n_ptr[h] = f[h];
	}
	if (new_size > old_size)
	{
		for (h = 0; h < old_size; h++)
			n_ptr[h] = f[h];
	}
	free(n_ptr);
	return (n_ptr);
}

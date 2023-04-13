#include <stdlib.h>
#include "main.h"

/**
 * *_memset - a function that allocates memory for an array, using malloc.
 * @s: the memory area
 * @n: number of times
 * @b: the character
 *
 * Return: a pointer to the allocated memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

/**
 * *_calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: the number of elements
 * @size: the size of each element
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}

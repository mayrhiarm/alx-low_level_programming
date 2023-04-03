#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: the  memory where is stored
 * @src: The byte from the memory area where is copied
 * *@n: this is the function copies
 *
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int s = 0;

	while (s < n)
	{
	dest[s] = src[s];
	s++;
	}
	return (dest);
}

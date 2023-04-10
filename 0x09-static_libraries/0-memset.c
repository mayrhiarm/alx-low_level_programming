#include "main.h"
/**
 * _memset - The function that fills memory with a specific value
 * @s: the memory area pointed s
 * * @b: the constant byte b
 * @n: the number of bytes of the memory
 * Return: with the new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int h;

	h = 0;

	while (h < n)
	{
	s[h] = b;
	h++;
	}

	return (s);
}

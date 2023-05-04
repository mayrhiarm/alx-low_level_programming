#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b:  is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0.
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int v = 0;

	if (!b)
		return (0);

	for (n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		v = 2 * v + (b[n] - '0');
	}

	return (v);
}

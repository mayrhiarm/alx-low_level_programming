#include "main.h"

/**
 * binary_to_uint -  a funcn that converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars.
 * Return: unsigned int with decimal value of binary number, else 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int numb;

	numb = 0;
	if (!b)
		return (0);
	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
	}
	for (k = 0; b[k] != '\0'; k++)
	{
		numb <<= 1;
		if (b[k] == '1')
			numb += 1;
	}
	return (numb);
}

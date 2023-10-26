#include "main.h"

/**
 * flip_bits - a funcn that returns the number of bits to be flipped
 * @n: the first number
 * @m: the second number
 * Return: the number of bits required to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int count = 0;

	while (i)
	{
		count += i & 1;
		i >>= 1;
	}

	return (count);
}

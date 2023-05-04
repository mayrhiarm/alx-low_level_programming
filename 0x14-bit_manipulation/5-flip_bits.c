#include "main.h"
#include <stdio.h>
/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: the first number to flip
 * @m: the second number to flip
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num;

	for (num = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			num++;
	}

	return (num);
}

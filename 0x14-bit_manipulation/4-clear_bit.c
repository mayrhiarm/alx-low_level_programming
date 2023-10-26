#include "main.h"

/**
 * clear_bit - a funcn that set the value of a bit to 0 at a given index.
 * @n: value of a bit
 * @index: index, starting from 0 of the bit to set
 * Return: 1 for success or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

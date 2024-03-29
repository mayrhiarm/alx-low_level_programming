#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * get_bit - a func that returns the value of a bit at a given index.
 * @n: the value of a bit
 * @index: index, starting from 0 of the bit to get.
 *
 * Return: the value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		return ((n & (1 << index)) != 0);
	}
}

#include "main.h"

/**
 * get_endianness -  a function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int k;

	char *f;

	k = 1;
	f = (char *)&k;
	return (*f);
}

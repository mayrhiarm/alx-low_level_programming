#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: The string measurement.
 *
 * Return: The string length
 */
int _strlen_recursion(char *s)
{
	int k = 0;

	if (*s)
	{
		k++;
		k += _strlen_recursion(s + 1);
	}
	return (k);
}

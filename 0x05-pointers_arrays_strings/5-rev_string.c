#include "string.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 * Return: string in reverse
 */

void rev_string(char *s)
{
	int string_length = strlen(s);
	int i, j;
	char temp;

	for (i = 0, j = string_length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}

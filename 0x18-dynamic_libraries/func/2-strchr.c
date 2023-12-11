#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: the string input
 * @c: the character c
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int d = 0;

	for (; s[d] >= '\0'; d++)
	{
	if (s[d] == c)
		return (&s[d]);
	}
	return (0);
}

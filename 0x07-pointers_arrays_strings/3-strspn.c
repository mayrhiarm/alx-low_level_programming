#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: the string input
 * @accept: the iput
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int w = 0;
	int g;

	while (*s)
	{
	for (g = 0; accept[g]; g++)
	{
	if (*s == accept[g])
		{
		w++;
		break;
		}
	else if (accept[g + 1] == '\0')
	return (w);
	}
	s++;
	}
	return (w);
}

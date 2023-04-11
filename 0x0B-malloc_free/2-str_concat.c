#include "main.h"
#include <stdlib.h>

/**
 * str_concat -a function that concatenates two strings.
 * @s1: first string input
 * @s2: second string input
 *
 * Return: the concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int s, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s = i = 0;
	while (s1[s] != '\0')
		s++;
	while (s2[i] != '\0')
		i++;
	concat = malloc(sizeof(char) * (s + i + 1));

	if (concat == NULL)
		return (NULL);
	s = i = 0;
	while (s1[s] != '\0')
	{
		concat[s] = s1[s];
		s++;
	}

	while (s2[i] != '\0')
	{
		concat[s] = s2[i];
		s++, i++;
	}
	concat[s] = '\0';
	return (concat);
}

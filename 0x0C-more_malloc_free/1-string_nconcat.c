#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - a function that concatenates two strings.
 * @s1: the first string
 * @s2:the second string
 * @n: the no of bytes from s2
 *
 * Return: pointer to the to a newly allocated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int b = 0, c = 0, first_len = 0, second_len = 0;

	while (s1 && s1[first_len])
		first_len++;
	while (s2 && s2[second_len])
		second_len++;

	if (n < second_len)
		s = malloc(sizeof(char) * (first_len + n + 1));
	else
		s = malloc(sizeof(char) * (first_len + second_len + 1));
	if (!s)
		return (NULL);
	while (b < first_len)
	{
		s[b] = s1[b];
		b++;
	}
	while (n < second_len && b < (first_len + n))
		s[b++] = s2[c++];
	while (n >= second_len && b < (first_len + second_len))
		s[b++] = s2[c++];

	s[b] = '\0';
	return (s);
}

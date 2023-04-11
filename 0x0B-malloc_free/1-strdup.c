#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * @str: the char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *a;
	int b, f = 0;

	if (str == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
		b++;

	a = malloc(sizeof(char) * (b + 1));

	if (a == NULL)
		return (NULL);

	for (f = 0; str[f]; f++)
		a[f] = str[f];

	return (a);
}

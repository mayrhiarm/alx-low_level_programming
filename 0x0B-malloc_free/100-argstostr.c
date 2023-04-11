#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int m, n, u = 0, q = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n]; n++)
			q++;
	}
	q += ac;

	str = malloc(sizeof(char) * q + 1);
	if (str == NULL)
		return (NULL);
	for (m = 0; m < ac; m++)
	{
	for (n = 0; av[m][n]; n++)
	{
		str[u] = av[m][n];
		u++;
	}
	if (str[u] == '\0')
	{
		str[u++] = '\n';
	}
	}
	return (str);
}

#include <stdlib.h>
#include "main.h"

/**
 * count_words - a function that helps to count number of words in a string
 * @s: the string
 *
 * Return: no of words counted
 */
int count_words(char *s)
{
	int i, v, r;

	i = 0;
	r = 0;

	for (v = 0; s[v] != '\0'; v++)
	{
		if (s[v] == ' ')
			i = 0;
		else if (i == 0)
		{
			i = 1;
			r++;
		}
	}

	return (r);
}
/**
 * **strtow - a function that splits a string into words.
 * @str: the string
 *
 * Return: a pointer to an array of strings if Successful
 * or NULL if error occur
 */
char **strtow(char *str)
{
	char **index, *tmp;
	int a, b = 0, word_len = 0, the_words, h = 0, beginning, end;

	while (*(str + word_len))
		word_len++;
	the_words = count_words(str);
	if (the_words == 0)
		return (NULL);

	index = (char **) malloc(sizeof(char *) * (the_words + 1));
	if (index == NULL)
		return (NULL);

	for (a = 0; a <= word_len; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (h)
			{
				end = a;
				tmp = (char *) malloc(sizeof(char) * (h + 1));
				if (tmp == NULL)
					return (NULL);
				while (beginning < end)
					*tmp++ = str[beginning++];
				*tmp = '\0';
				index[b] = tmp - h;
				b++;
				h = 0;
			}
		}
		else if (h++ == 0)
			beginning = a;
	}

	index[b] = NULL;

	return (index);
}

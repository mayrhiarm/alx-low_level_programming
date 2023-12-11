#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: the string to  find
 * @needle: the substring input
 * Return: 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
	char *m = haystack;
	char *n = needle;

	while (*m == *n && *n != '\0')
	{
		m++;
		n++;
	}

	if (*n == '\0')
	return (haystack);
	}
	return (0);
}

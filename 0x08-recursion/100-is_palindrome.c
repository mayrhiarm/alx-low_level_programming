#include "main.h"

int confirm(char *s, int r, int dent);
int new_recursion(char *s);

/**
 * is_palindrome - a function to confirm if a string is a palindrome
 * @s: the string
 *
 * Return: it returns 1 if it is, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (confirm(s, 0, new_recursion(s)));
}

/**
 * new_recursion - it will reveal length of a string
 * @s: the string
 *
 * Return: to return the string length
 */
int new_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + new_recursion(s + 1));
}

/**
 * confirm - to find the characters recursively for palindrome
 * @s: the string
 * @r: the reiterate number
 * @dent: the string length
 *
 * Return: 1 if palindrome, 0 if not
 */
int confirm(char *s, int r, int dent)
{
	if (*(s + r) != *(s + dent - 1))
		return (0);
	if (r >= dent)
		return (1);
	return (confirm(s, r + 1, dent - 1));
}

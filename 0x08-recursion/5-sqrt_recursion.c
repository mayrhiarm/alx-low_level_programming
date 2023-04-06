#include "main.h"

int real_sqrt_recursion(int n, int r);

/**
 * _sqrt_recursion - it finds the natural square root of a number.
 * @n: the number to find the square root of
 *
 * Return: the square root result.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - it finds the natural square root of a number.
 * @n: the number to find the square root of
 * @r: reiterate number
 *
 * Return: the resulting square root
 */
int real_sqrt_recursion(int n, int r)
{
	if (r * r > n)
		return (-1);
	if (r * r == n)
		return (r);
	return (real_sqrt_recursion(n, r + 1));
}

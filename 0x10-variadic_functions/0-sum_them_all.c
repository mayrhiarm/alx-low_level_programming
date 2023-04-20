#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: the integers to sum
 * Return: if n == 0 - 0, if not - sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int sum;
	va_list arg_sum;

	if (n == 0)
		return (0);
	va_start(arg_sum, n);
	sum = 0;

	for (a = 0; a < n; a++)
		sum += va_arg(arg_sum, int);
	va_end(arg_sum);
	return (sum);
}

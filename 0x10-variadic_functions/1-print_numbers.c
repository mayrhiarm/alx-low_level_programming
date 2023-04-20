#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: the seperator char
 * @n: const var
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int p;
	va_list numbs;

	va_start(numbs, n);
	for (p = 0; p < n; p++)
	{
		if (p > 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(numbs, int));
	}
	va_end(numbs);
	printf("\n");
}

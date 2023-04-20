#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: the seperator char
 * @n: the number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int s;
	va_list strings;
	char *strArg;

	va_start(strings, n);
	for (s = 0; s < n; s++)
	{
		strArg = va_arg(strings, char *);

		if (separator != NULL && s > 0)
			printf("%s", separator);
		if (strArg == NULL)
			printf("(nil)");
		else
			printf("%s", strArg);
	}
	va_end(strings);
	printf("\n");
}

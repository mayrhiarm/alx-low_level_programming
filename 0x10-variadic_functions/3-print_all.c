#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_c -  a function that prints char
 * @a: the list to give
 * Return: always 0 (success)
 */
int print_c(va_list a)
{
	printf("%c", va_arg(a, int));
	return (0);
}

/**
 * print_i - a function that prints int
 * @a: the list to give
 * Return: always 0 (success)
 */

int print_i(va_list a)
{
	printf("%d", va_arg(a, int));
	return (0);
}

/**
 * print_f - a function that prints float
 * @a: the list to give
 * Return: always 0 (success)
 */
int print_f(va_list a)
{
	printf("%f", va_arg(a, double));
	return (0);
}

/**
 * print_s - a function that prints string
 * @a: the list to give
 * Return: always 0 (success)
 */
int print_s(va_list a)
{
	char *s;

	s = va_arg(a, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return (0);
	}
	printf("%s", s);
	return (0);
}

/**
 * print_all - a function that prints all
 * @format: list of the arg types
 *
 */
void print_all(const char * const format, ...)
{
	int f = 0;
	char *str, *sep = "";

	va_list listArg;

	va_start(listArg, format);

	if (format)
	{
		while (format[f])
		{
			switch (format[f])
			{
				case 'c':
					printf("%s%c", sep, va_arg(listArg, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(listArg, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(listArg, double));
					break;
				case 's':
					str = va_arg(listArg, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					f++;
					continue;
			}
			sep = ", ";
			f++;
		}
	}

	printf("\n");
	va_end(listArg);
}

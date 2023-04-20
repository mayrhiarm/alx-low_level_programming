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
	int p, q;
	char *sep1 = "";
	char *sep2 = ", ";
	va_list listArgs;
	printer ops[] = {
		{"c", print_c},
		{"i", print_i},
		{"s", print_s},
		{"f", print_f},
		{NULL, NULL}
	};

	va_start(listArgs, format);
	p = 0;
	while (format != NULL && format[p])
	{
		q = 0;
		while (ops[q].f != NULL)
		{
			if (format[p] == *(ops[q].c))
			{
				printf("%s", sep1);
				ops[q].f(listArgs);
			}
			q++;
		}
		sep1 = sep2;
		p++;
	}
	printf("\n");
	va_end(listArgs);
}

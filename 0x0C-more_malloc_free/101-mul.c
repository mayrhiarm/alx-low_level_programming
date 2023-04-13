#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
 * is_digit - to check a non-digit character
 * @s: the string
 * Return: 0 if a non-digit is found, 1 if not
 */
int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}
/**
 * _strlen - the length of a string
 * @s: the string
 * Return: length of string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
/**
 * errors - it shows errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - a program that multiplies two positive numbers.
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len_1, len_2, the_len, b, work, num1, num2, *prod, v = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len_1 = _strlen(s1);
	len_2 = _strlen(s2);
	the_len = len_1 + len_2 + 1;
	prod = malloc(sizeof(int) * the_len);
	if (!prod)
		return (1);
	for (b = 0; b <= len_1 + len_2; b++)
		prod[b] = 0;
	for (len_1 = len_1 - 1; len_1 >= 0; len_1--)
	{
		num1 = s1[len_1] - '0';
		work = 0;
		for (len_2 = _strlen(s2) - 1; len_2 >= 0; len_2--)
		{
			num2 = s2[len_2] - '0';
			work += prod[len_1 + len_2 + 1] + (num1 * num2);
			prod[len_1 + len_2 + 1] = work % 10;
			work /= 10;
		}
		if (work > 0)
			prod[len_1 + len_2 + 1] += work;
	}
	for (b = 0; b < the_len - 1; b++)
	{
		if (prod[b])
			v = 1;
		if (v)
			_putchar(prod[b] + '0');
	}
	if (!v)
		_putchar('0');
	_putchar('\n');
	free(prod);
	return (0);
}

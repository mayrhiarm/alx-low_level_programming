#include "main.h"

int real_prime(int n, int r);
/**
 * is_prime_number - it shows if an integer is a prime number
 * @n: the number to evaluate
 * Return: returns 1 if the input integer is a prime number, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}

/**
 * real_prime - confirm a prime number
 * @n: the number to evaluate
 * @r: the reiterate number
 * Return: returns 1 if the input integer is a prime number, 0 if not.
 */
int real_prime(int n, int r)
{
	if (r == 1)
		return (1);
	if (n % r == 0 && r > 0)
		return (0);
	return (real_prime(n, r - 1));
}

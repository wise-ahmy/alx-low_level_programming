#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number - Check if number is prime
 * @n: number to evaluate
 * Return: 1 if it is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - Checks if a number is a prime number recursively.
 * @n: The number to be checked.
 * @i: The current divisor to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int actual_prime(int n, int i)
{
	if (i == 0)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}

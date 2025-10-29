#include "main.h"

/**
 * check_prime - helper function to test if a number is divisible
 * @n: number to check
 * @div: current divisor being tested
 *
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int div)
{
	if (n % div == 0 && div != n)
		return (0); /* Not prime if divisible by another number */

	if (div * div > n)
		return (1); /* No divisors found, so it’s prime */

	return (check_prime(n, div + 1));
}

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: number to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0); /* 0, 1, and negative numbers are not prime */

	return (check_prime(n, 2));
}

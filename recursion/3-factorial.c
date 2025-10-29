#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to calculate the factorial of
 *
 * Return: factorial of n
 *         -1 if n is lower than 0 (error)
 */
int factorial(int n)
{
	if (n < 0) /* Error case: negative number */
		return (-1);

	if (n == 0) /* Base case: factorial of 0 is 1 */
		return (1);

	return (n * factorial(n - 1)); /* Recursive case */
}

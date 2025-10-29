#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base number
 * @y: exponent
 *
 * Return: x raised to the power of y
 *         -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0) /* Error case: negative exponent */
		return (-1);

	if (y == 0) /* Base case: x^0 = 1 */
		return (1);

	return (x * _pow_recursion(x, y - 1)); /* Recursive case */
}

#include <stdio.h>

/**
 * _isdigit - Checks if a character is a digit (0 through 9).
 * @c: The character to check, passed as an int (usually the ASCII value).
 *
 * Return: 1 if c is a digit (0–9), 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return 1; // It is a digit
	else
		return 0; // It is not a digit
}

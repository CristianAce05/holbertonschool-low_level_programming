#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Description:
 * Compares the strings s1 and s2.
 * Returns an integer less than, equal to, or greater than zero
 * if s1 is found, respectively, to be less than, to match, or be greater than s2.
 *
 * Return: negative if s1 < s2, 0 if s1 == s2, positive if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;

	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

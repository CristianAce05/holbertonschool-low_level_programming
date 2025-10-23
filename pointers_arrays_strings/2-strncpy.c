#include "main.h"

/**
 * _strncpy - copies a string up to n characters
 * @dest: destination buffer
 * @src: source string
 * @n: number of bytes to copy
 *
 * Description:
 * Copies up to n characters from src to dest. If src is shorter than n,
 * pads dest with null bytes. Does not add a terminating null byte if
 * src is longer or equal to n.
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

#include "main.h"

/**
 * _strncpy - copies up to n characters from src to dest
 * @dest: destination buffer
 * @src: source string
 * @n: maximum number of characters to copy
 *
 * Description:
 * Copies up to n characters from the string pointed to by src to dest.
 * If the length of src is less than n, the remainder of dest is filled with '\0'.
 * If src is longer than or equal to n, no null terminator is appended.
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

    return dest;
}

#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 * @n: maximum number of bytes to copy from src
 *
 * Description:
 * Copies at most `n` characters from `src` to `dest`.
 * If `src` is shorter than `n`, the remainder of `dest`
 * is padded with null bytes ('\0').
 *
 * If `src` has `n` or more bytes, no null byte is appended
 * (just like the standard strncpy).
 *
 * Return: pointer to the destination string `dest`
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return (dest);
}

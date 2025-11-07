#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to newly allocated memory containing s1 followed by
 *         first n bytes of s2, and null terminated.
 *         If function fails, returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *ptr;

	/* Treat NULL as empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Find lengths of s1 and s2 */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* If n >= len2, use the whole s2 */
	if (n >= len2)
		n = len2;

	/* Allocate memory for s1 + n bytes of s2 + null terminator */
	ptr = malloc(len1 + n + 1);
	if (ptr == NULL)
		return (NULL);

	/* Copy s1 into ptr */
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	/* Copy first n bytes of s2 into ptr */
	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];

	/* Null-terminate the new string */
	ptr[i + j] = '\0';

	return (ptr);
}

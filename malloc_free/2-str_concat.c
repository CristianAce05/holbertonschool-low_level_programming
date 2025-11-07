#include <stdlib.h>

/**
 * str_concat - concatenates two strings into a newly allocated memory
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the newly allocated concatenated string,
 *         or NULL if memory allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, len1, len2;

	/* Treat NULL as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate lengths of s1 and s2 */
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	/* Allocate memory for concatenated string (+1 for null terminator) */
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);

	/* Copy s1 into concat */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Append s2 into concat */
	for (j = 0; j < len2; j++)
		concat[i + j] = s2[j];

	/* Null terminate */
	concat[i + j] = '\0';

	return (concat);
}

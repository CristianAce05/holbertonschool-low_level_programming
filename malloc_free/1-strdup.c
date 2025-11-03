#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space containing a copy of str
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str is NULL or malloc fails
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len;

	if (str == NULL)
		return NULL;

	/* Calculate length of the string */
	for (len = 0; str[len] != '\0'; len++)
		;

	/* Allocate memory for the duplicate string (+1 for null terminator) */
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return NULL;

	/* Copy the string */
	for (i = 0; i <= len; i++) /* include the null terminator */
		dup[i] = str[i];

	return dup;
}

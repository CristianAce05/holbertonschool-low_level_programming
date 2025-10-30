#include <stdio.h>

/**
 * main - prints its own name (including the path), followed by a new line
 *
 * @argc: argument count (not used)
 * @argv: array of strings containing command-line arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argc; /* Suppress unused variable warning for argc */

	/* Print the name of the program (including its path) */
	printf("%s\n", argv[0]);

	/* Return 0 to indicate successful execution */
	return (0);
}

#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 *
 * @argc: argument count
 * @argv: array of argument strings (unused)
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Suppress unused variable warning for argv */

	/* Subtract 1 to exclude the program name itself */
	printf("%d\n", argc - 1);

	/* Return 0 to indicate successful execution */
	return (0);
}

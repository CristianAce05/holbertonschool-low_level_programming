#include <stdio.h>

/**
 * main - prints all arguments it receives, one per line
 *
 * @argc: argument count
 * @argv: array of argument strings
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	/* Loop through all arguments, including the program name */
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	/* Return 0 to indicate successful execution */
	return (0);
}

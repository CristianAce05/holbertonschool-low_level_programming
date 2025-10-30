#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers passed as arguments
 *
 * @argc: argument count
 * @argv: array of argument strings
 *
 * Return: 0 if successful, 1 if a non-digit symbol is found
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	/* If no number is passed, print 0 */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* Loop through all arguments starting from argv[1] */
	for (i = 1; i < argc; i++)
	{
		/* Check that each character in the argument is a digit */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		/* Convert argument to integer and add to sum */
		sum += atoi(argv[i]);
	}

	/* Print the final result followed by a new line */
	printf("%d\n", sum);

	/* Return 0 to indicate successful execution */
	return (0);
}

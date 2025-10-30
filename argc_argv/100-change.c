#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount
 *
 * @argc: argument count
 * @argv: array of argument strings
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	/* Check if exactly one argument is provided */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert argument to integer */
	cents = atoi(argv[1]);

	/* If number is negative, print 0 */
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	/* Calculate minimum coins using greedy algorithm */
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;

		coins++;
	}

	/* Print total number of coins */
	printf("%d\n", coins);

	/* Return 0 to indicate successful execution */
	return (0);
}

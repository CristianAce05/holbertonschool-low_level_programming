#include <stdio.h>
/**
 *  main - Prints all the num of base 16 in lowercase
 *
 *  Return: Always (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)

		putchar(i++ + '0');

	i = 0;

	while (i < 6)
		putchar(i++ + 'a');

	putchar('\n');

	return (0);
}


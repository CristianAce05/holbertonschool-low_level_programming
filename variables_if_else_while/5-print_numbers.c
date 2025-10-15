#include <stdio.h>
/**
 * main - Prints all single digit num of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');
	return (0);
}


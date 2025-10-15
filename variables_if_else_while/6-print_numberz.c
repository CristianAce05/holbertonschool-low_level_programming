#include <stdio.h>
/**
 * main - Prints all single digit num of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0
		;
	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}


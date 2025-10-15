#include <stdio.h>
/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Return: Always (Success)
 */
int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}


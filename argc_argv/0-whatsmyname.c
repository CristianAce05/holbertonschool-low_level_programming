#include <stdio.h>

/**
 * main - prints its own name (including path), followed by a new line
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc; /* Unused parameter */
	printf("%s\n", argv[0]);
	return 0;
}

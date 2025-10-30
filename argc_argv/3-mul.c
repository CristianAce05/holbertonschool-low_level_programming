#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers passed as arguments
 *
 * @argc: argument count
 * @argv: array of argument strings
 *
 * Return: 0 if successful, 1 if incorrect number of arguments
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;

    /* Check if exactly two arguments are provided (excluding program name) */
    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }

    /* Convert arguments from strings to integers */
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    /* Perform multiplication */
    result = num1 * num2;

    /* Print the result followed by a new line */
    printf("%d\n", result);

    /* Return 0 to indicate successful execution */
    return (0);
}

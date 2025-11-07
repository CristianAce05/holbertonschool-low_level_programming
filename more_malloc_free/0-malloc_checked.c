#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
<<<<<<< HEAD
 * Return: pointer to the allocated memory
 * If malloc fails, the function terminates the process with status value 98
=======
 * Return: pointer to allocated memory
 *         if malloc fails, terminates with status value 98
>>>>>>> 20f1557ee66fded01fda381f27209ab4551749ba
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}

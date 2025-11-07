#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the contents of a struct dog
 * @d: pointer to the struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("(nil)");

	/* Print name */
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	/* Print age */
	printf("Age: %.1f\n", d->age);

	/* Print owner */
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}

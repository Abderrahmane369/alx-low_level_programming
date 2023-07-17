#include "main.h"
#include <stdio.h>

/**
 * print_dog - eza
 * @d: ezaea
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("");

	if (d->name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s", d->name);

	if (d->age == NULL)
		printf("Age: (nil)");
	else
		printf("Age: %s", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s", d->owner);
}

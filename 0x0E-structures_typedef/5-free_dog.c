#include "dog.h"
#include <stddef.h>
#include <stdlib.h>


/**
 * free_dog - eaeza
 * @d: eza
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}

#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * init_dog - eaz
 * @d: eaa
 * @name: aez
 * @age: eaze
 * @owner: azea
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

d->name = malloc(strlen(name) + 1);
d->owner = malloc(strlen(owner) + 1);
d->age = age;

if (d->name == NULL || d->owner == NULL)
return;

strcpy(d->name, name);
strcpy(d->owner, owner);
}

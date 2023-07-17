#include "dog.h"
#include <string.h>
/**
 * init_dog - eaz
 * @d: eaa
 * @name: aez
 * @age: eaze
 * @owner: azea
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(strlen(name) + 1):
	d->age = age;
	d->owner = malloc(strlen(owner) + 1);

	strcpy(d->name, name);
	strcpy(d->owner, owner);
}

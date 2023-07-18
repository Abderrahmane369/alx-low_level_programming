#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - eaz
 * @name: za
 * @age: aez
 * @owner: eaz
 * Return: ez
 */

dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *d = malloc(sizeof(dog_t));

d->name = malloc(sizeof(name));
d->owner = malloc(sizeof(owner));

if (name == NULL || owner == NULL)
{
	free(d);
	free(d->name);
	free(d->owner);
	return (NULL);
}

if (d == NULL || d->name == NULL || d->owner == NULL)
{
free(d);
free(d->name);
free(d->owner);

return (NULL);
}

strcpy(d->name, name);
d->age = age;
strcpy(d->owner, owner);

return (d);
}

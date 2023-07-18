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
char *n = (name == NULL) ? NULL : strdup(name);
char *o = (owner == NULL) ? NULL : strdup(owner);
dog_t *d = malloc(sizeof(dog_t));

if (name == NULL || owner == NULL)
{
	free(d);
	return (NULL);
}

if (d == NULL || o == NULL || n == NULL)
{
free(d);
free(n);
free(o);

return (NULL);
}

d->name = n;
d->age = age;
d->owner = o;

return (d);
}

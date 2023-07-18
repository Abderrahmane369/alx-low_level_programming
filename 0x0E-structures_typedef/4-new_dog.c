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
char *n = (name = NULL) ? NULL : strdup(name);
char *o = (name = NULL) ? NULL : strdup(owner);

dog_t *d = malloc(sizeof(dog_t));

d->name = malloc(sizeof(name));
d->owner = malloc(sizeof(owner));

if (n == NULL || o == NULL)
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

strcpy(d->name, n);
d->age = age;
strcpy(d->owner, o);

return (d);
}

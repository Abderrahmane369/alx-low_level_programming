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
if (d == NULL)
return (NULL);

d->name = malloc(sizeof(char) * (strlen(name) + 1));
if (d->name == NULL)
{
free(d);
return (NULL);
}
d->owner = malloc(sizeof(char) * (strlen(owner) + 1));
if (d->owner == NULL)
{
free(d);
free(d->name);
return (NULL);
}
strcpy(d->name, name);
strcpy(d->owner, owner);
d->age = age;

return (d);
}

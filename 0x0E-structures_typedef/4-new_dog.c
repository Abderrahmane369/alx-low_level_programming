#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - eaz
 * @name: za
 * @age: aez
 * @owner: eaz
 * Return: eza
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *n = name;
	char *o = owner;

	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = n;
	d->owner = o;
	d->age = age;

	return (d);
}

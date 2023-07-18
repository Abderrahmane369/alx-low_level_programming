#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - eaz
 * @name: za
 * @age: aez
 * @owner: eaz
 * Return: eza
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *n = malloc(sizeof(name));
	char *o = malloc(sizeof(owner));
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL || o == NULL || n == NULL)
		return (NULL);

	strcpy(n, name);
	strcpy(o, owner);

	if (n == NULL || o == NULL)
		return (NULL);

	d->name = n;
	d->owner = o;
	d->age = age;

	return (d);
}

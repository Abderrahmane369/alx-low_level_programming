#ifndef DOG
#define DOG

/**
 * struct dog - ooope
 * @name: eza
 * @age: ezae
 * @owner: eaz
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - eazeaz
 * @b: eea
 * Return: ezae
 */

void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
		fprintf(stderr, "98");

	return (a);
}	

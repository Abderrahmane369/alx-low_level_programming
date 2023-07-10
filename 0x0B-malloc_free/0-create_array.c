#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - eazeae
 * @size: sez
 * @c: zea
 * Return: ezaea
 */

char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *carr;

	if (size == 0)
		return (NULL);

	carr = malloc(sizeof(char) * size);

	if (carr == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
	{
		carr[k] = c;
	}

	return (carr);
}

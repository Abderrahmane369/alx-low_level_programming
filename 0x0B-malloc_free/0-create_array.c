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

	carr = (char *)malloc(sizeof(char) * size);

	for (k = 0; k < size; k++)
	{
		carr[k] = c;
	}

	carr[size] = '\0';

	return (carr);
}

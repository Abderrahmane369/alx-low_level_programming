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
	int k;

	if (size == 0)
		return (NULL);
	else
	{
		char *carr;

		carr = malloc(sizeof(char) * (size + 1));

		for (k = 0; k < size; k++)
		{
			carr[k] = c;
		}

		carr[size + 1] = '\0';
		
		return (carr);
	}

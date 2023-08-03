#include <stdio.h>

/**
 * set_bit - zea
 * @n: a
 * @index: eza
 * Return: eza
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int p = 1U << index;

	if ((*n | p) == *n)
	{
		*n -= p;
	}
	else
	{
		*n += p;
	}

	return (1);
}

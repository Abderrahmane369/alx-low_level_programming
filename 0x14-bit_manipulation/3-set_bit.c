#include <stdio.h>

/**
 * set_bit - zea
 * @n: a
 * @index: eza
 * Return: eza
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int p;

	if (index >= sizeof(unsigned int) * 8)
		return (-1);

	p = 1U << index;

	*n |= p;

	return (1);
}

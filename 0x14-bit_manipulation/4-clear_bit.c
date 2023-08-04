#include "main.h"

/**
 * clear_bit - eza
 * @n: eaz
 * @index: azeaze
 * Return: ezaa
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int p;

	if (index > sizeof(unsigned int) * 8)
		return (-1);

	p = 1U << index;

	p = ~p;

	n &= p;

	return (1);
}

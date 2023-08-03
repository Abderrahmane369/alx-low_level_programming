#include "main.h"
#include <stdio.h>

/**
 * get_bit - ezaezaeza
 * @n: eza
 * @index: eza
 * Return: eza
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int p;

	if (index > sizeof(unsigned int) * 8)
		return (-1);

	p = 1U << index;

	return ((n | p) == n);
}

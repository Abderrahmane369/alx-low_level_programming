#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - za
 * @b: eza
 * Return: eza
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int t = 1;
	unsigned int sum = 0;

	if (!b)
		return (0);

	while (*b)
	{
		b++;
	}

	b--;

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		if (*b == '1')
			sum += t;

		t *= 2;
		b--;
	}

	return (sum);
}

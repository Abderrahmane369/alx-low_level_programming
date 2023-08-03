#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * binary_to_uint - za
 * @b: eza
 * Return: eza
 */

unsigned int binary_to_uint(const char *b)
{
	const char *bn = b;
	int k = 0;
	unsigned int sum = 0;

	if (!bn)
		return (0);

	while (*bn)
	{
		b++;
	}

	*bn--;

	while (*bn)
	{
		if (*bn != '0' && *bn != '1')
			return (0);

		if (*bn == '1')
			sum += (unsigned int)pow(2, k);

		k++;
		*bn++;
	}

	return (sum);
}

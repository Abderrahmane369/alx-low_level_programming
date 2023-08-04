#include "main.h"

/**
 * flip_bits - eza
 * @n: eza
 * @m: eza
 * Return: eza
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nam = n ^ m;
	unsigned long int t;
	unsigned int bits = 0;

	t = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (t)
	{
		if ((nam & t) != 0)
			bits++;

		t >>= 1;
	}

	return (bits);
}

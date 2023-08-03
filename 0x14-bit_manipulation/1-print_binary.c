#include <stdio.h>

/**
 * print_binary - eza
 * @n: eza
 */

void print_binary(unsigned long int n)
{
	unsigned long int t = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int z = 0;

	if (!n)
		putchar('0');

	while (t > 0)
	{
		if (n & t)
		{
			putchar('1');
			z = 1;
		}
		else
		{
			if (z)
				putchar('0');
		}

		t >>= 1;
	}
}

#include <stdio.h>

/**
 * print_binary - eza
 * @n: eza
 */

void print_binary(unsigned long int n)
{
	unsigned long int t = 1;
	
	if (!n)
		putchar('0');

	while (n >= t)
	{
		t <<= 1;
	}

	t >>= 1;

	while (t > 0)
	{
		if (n & t)
			putchar('1');
		else
			putchar ('0');

		t >>= 1;
	}
}

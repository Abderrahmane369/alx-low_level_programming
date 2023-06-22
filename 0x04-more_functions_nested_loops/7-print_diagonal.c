#include "main.h"

/**
 * print_diagonal - eeezeae
 * @n: isqe
 */

void print_diagonal(int n)
{
int l, m;

if (n > 0)
{
for (l = 0; l < n; l++)
{
for (m = 0; m < l; m++)
{
_putchar(32);
}
_putchar('\\');
_putchar('\n');
}
}
else
_putchar('\n');
}

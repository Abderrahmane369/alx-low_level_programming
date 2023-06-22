#include "main.h"

/**
 * print_square - oppo
 * @size: eesize
 */

void print_square(int size)
{
int l, m;

if (size > 0)
{
for (l = 0; l < size; l++)
{
for (m = 0; m < size; m++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}

#include "main.h"

/**
 * print_triangle - tick
 * @n: SUp
 */

void print_triangle(int size)
{
int a, b;

for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
if (b >= size - a - 1)
putchar('#');
else
putchar(32);
}
putchar('\n');
}
}

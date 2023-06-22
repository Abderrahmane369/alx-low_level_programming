#include "main.h"

/**
 * print_triangle - tick
 * @size: SUp
 */
void print_triangle(int size)
{
int a, b;

if (size > 0)
{
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
if (b >= size - a - 1)
_putchar('#');
else
_putchar(32);
}
_putchar('\n');
}
}
else
_putchar('\n');
}

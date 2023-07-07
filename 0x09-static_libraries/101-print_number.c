#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * print_number - itedsfl
 * @n: zedl
 */

void print_number(int n)
{
int k;

if (n == 0)
_putchar(48);

else
{

if (n < 0)
_putchar(45);

for (k = 0; k <= floor(log10(abs(n))); k++)
{

int cd = floor(abs(n) / pow(10, floor(log10(abs(n))) - k));

_putchar(cd % 10 + 48);
}
}
}

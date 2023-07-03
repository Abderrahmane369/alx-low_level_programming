#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - diagm
 * @a: aaa
 * @size: skze
 */

void print_diagsums(int *a, int size)
{
int k;
int sum0 = 0;
int sum1 = 0;

for (k = 0; k < size; k++)
{
sum0 += a[size * k + k];
sum1 += a[size * k + (size - k - 1)];
}

printf("%d, %d\n", sum0, sum1);
}

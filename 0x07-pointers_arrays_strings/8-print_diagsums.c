#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - diagm
 * @a: aaa
 */

void print_diagsums(int *a, int size)
{
int k;
int sum0 = 0;
int sum1 = 0;

for (k = 0; k < size; k++)
{
sum0 += a[k][k];
sum1 += a[size - k - 1][size - k - 1];
}

printf("%s, %s", sum0, sum1);
}

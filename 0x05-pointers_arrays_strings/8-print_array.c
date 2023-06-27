#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - good
 * @a: array
 * @n: no
 */

void print_array(int *a, int n)
{
int k;

for (k = 0; k < n; k++)
{
printf("%d", a[k]);
if (k != (n - 1))
printf(", ");
}
printf("\n");
}

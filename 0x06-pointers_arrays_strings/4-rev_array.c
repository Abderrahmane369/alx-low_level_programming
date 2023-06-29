#include "main.h"

/**
 * reverse_array - ar
 * @a: op
 * @n: nnn
 */

void reverse_array(int *a, int n)
{
int k;

for (k = 0; k < n / 2; k++)
{
int ca = a[k];
a[k] = a[n - k - 1];
a[n - k - 1] = ca;
}
}

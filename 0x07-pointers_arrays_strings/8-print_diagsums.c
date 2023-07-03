#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - diagm
 * @a: aaa
 */

void print_diagsums(int a[][], int size)
{
unsigned long int k;
int sum0 = 0;
int sum1 = 0;

for (k = 0; k < strlen(a); k++)
{
sum0 += a[k][k];
sum1 += a[strlen(a) - k - 1][strlen(a) - k - 1];
}

printf("%s, %s", sum0, sum1);
}

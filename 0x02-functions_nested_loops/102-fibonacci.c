#include "main.h"
#include <stdio.h>

/**
 * main - ezazae
 * Return: 0 if it
 */

int main() {
int k;
for (k = 2; k < 50; k++)
{
int i;
unsigned long a = 0;
unsigned long b = 1;
unsigned long sum = 0;

for (i = 2; i <= k; i++)
{
sum = a + b;
a = b;
b = sum;
}

printf("%ld", sum);
if (k != 49)
printf(", ");
}

return 0;
}

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
long long a = 0;
long long b = 1;
long long sum = 0;

for (i = 2; i <= k; i++)
{
sum = a + b;
a = b;
b = sum;
}

printf("%lld", sum);
if (k != 49)
printf(", ");
}

return 0;
}

#include <stdio.h>

/**
 * main - i s a grf
 * Return: 0 if
 */

int main(void)
{
unsigned long suM;

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
if (sum > 4000000)
break;

if (sum % 2 == 0)
suM += sum;

}
printf("%ld\n", suM);

return (0);
}

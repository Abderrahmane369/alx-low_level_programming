#include <stdio.h>
#include <stdlib.h>

/**
 * max- ea
 * @n: ezae
 * @l: aezae
 * Return: 0
 */
int max(int n[], int l) {
int i;
int maxValue = n[0];

for (i = 0; i < l; i++)
{
if (n[i] > maxValue)
{
maxValue = n[i];
}

}

return (maxValue);
}

/**
 * main - ea
 * @argc: ezae
 * @argv: aezae
 * Return: 0
 */

int main(int argc, char *argv[])
{
int k = atoi(argv[1]);
int sum = 0;
int s;

if (argc != 2)
printf("Error\n");
else if (atoi(argv[1]) < 0)
printf("0\n");
else
{
while (k > 0)
{
int a[] = {25, 10, 5, 2, 1};
for (s = 0; s < 5; s++)
{
a[s] *= -1;
a[s] += k;
}
k -= max(a, 5);
sum++;
}
}

printf("%d\n", sum);
return (0);
}

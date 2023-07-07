#include <stdio.h>
#include <stdlib.h>

/**
 * main - ezaaze
 * @argc: ezae
 * @argv: ezaea
 * Return: 0
 */

int main(int argc, char *argv[])
{
int k;
int sum = 0;

if (argc == 1)
printf("0");
else
{
for (k = 1; k < argc; k++)
{
if (atoi(argv[k]) != 0)
sum += atoi(argv[k]);
else
printf("Error\n");
}
}

printf("%d\n", sum);

return (0);
}

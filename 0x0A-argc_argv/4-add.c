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
int sum;

if (argc == 1)
printf("Error\n");

else
{
for (k = 1; k < argc; k++)
{
if (atoi(argv[k]) != 0)
sum += atoi(argv[k]);
}
}

printf("%d", sum);

return (0);
}

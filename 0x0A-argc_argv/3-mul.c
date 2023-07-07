#include <stdio.h>
#include <stdlib.h>

/**
 * main - eza
 * @argc: zae
 * @argv: zae
 * Return: 0
 */

int main(int argc, char *argv[])
{
if (argc != 1)
{
int n0 = atoi(argv[2]);
int n1 = atoi(argv[1]);
int result = n0 * n1;

printf("%d\n", result);
}
else
printf("Error\n");

return (0);
}

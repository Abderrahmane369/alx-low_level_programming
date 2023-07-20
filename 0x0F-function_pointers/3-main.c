#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * main - eza
 * @argc: zae
 * @argv: eza
 * Return: 0
 */

int main(int argc, char *argv[])
{
int (*f)(int, int);
int result;

if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (get_op_func(argv[2]) == NULL)
{
printf("Error\n");
exit(99);
}

f = get_op_func(argv[2]);

if (strcmp(argv[2], "+") != 0 && strcmp(argv[2], "-") != 0 && strcmp(argv[3], "0") == 0)
{
printf("Error\n");
exit(100);
}

result = f(atoi(argv[1]), atoi(argv[3]));

printf("%d\n", result);

return (0);
}

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
printf("%d\n", 0);
else
{
for (k = 1; k < argc; k++)
{
sum += atoi(argv[k]);

if (atoi(argv[k]) == 0)
{
sum = 0;
break;
}

}

if (argv[1] == 0 && argc == 2)
printf("%d\n", 0);

else if (sum == 0)
{
printf("Error\n");
return (1);
}
else
printf("%d\n", sum);
}

return (0);
}

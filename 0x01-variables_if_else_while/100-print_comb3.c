#include <stdio.h>

/**
 * main - something
 *
 * Description: Soemthing
 *
 * Return: 0 (Success)
 */

int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
for (int j = 0; j <= 9; j++)
{
if (j != i && j > i)
{
putchar(i + 48);
putchar(j + 48);

if (j != 9 || i != 8) {
putchar(',');
putchar(' ');
}
}
}


}

putchar('\n');
return (0);
}

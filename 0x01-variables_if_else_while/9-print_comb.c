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
putchar(i + 48);
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

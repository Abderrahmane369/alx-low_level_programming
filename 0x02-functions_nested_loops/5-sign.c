#include <ctype.h>
#include "main.h"
/**
 * print_sign - it prints
 * @n: EA SPORTS
 * Return: 0 if not 1 one ok hh
 */

int print_sign(int n)
{
if (n == 0)
{
_putchar('0');
return (0);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('-');
return (-1);
}
}

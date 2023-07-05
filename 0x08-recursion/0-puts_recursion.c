#include "main.h"

/**
 * _puts_recursion - eazea
 * @s: op
 * Return: O0
 */

void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
s++;
}
else
{
_putchar('\n');
return;
}
_puts_recursion(s);
}

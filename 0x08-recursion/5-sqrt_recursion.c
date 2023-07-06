#include "main.h"

/**
 * _sqrt_recursion - ezplzel
 * @n:ezdk
 * Return: odfoo
 */

/**
 * ittr_sqrt_recursion - EZAEA
 * @n: no
 * @i: ittr
 * Return: der
 */

int ittr_sqrt_recursion(int n, int i)
{
if (i * i == n)
return (i);

if (i * i > n)
return (-1);

return (ittr_sqrt_recursion(n, i + 1));
}

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (ittr_sqrt_recursion(n, 0));
}

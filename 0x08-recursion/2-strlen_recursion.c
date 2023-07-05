#include "main.h"

/**
 * _strlen_recursion - epoaze
 * @s: sdsdqs
 * Return: da
 */

int _strlen_recursion(char *s)
{
if (*s)
{
return (_strlen_recursion(s + 1) + 1);
}

return (0);
}

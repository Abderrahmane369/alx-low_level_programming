#include "main.h"
#include <string.h>

/**
 * _puts - tspeqius
 * @s: EOEE
 */

void _puts(char *s)
{
    char *str = s;

    while (*str)
    {
        _putchar(*str);

        str++;
    }
}

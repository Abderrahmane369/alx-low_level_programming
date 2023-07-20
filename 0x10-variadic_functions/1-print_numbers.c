#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_numbers - eza
 * @n: eza
 * @separator: ezaea
 * @..: ezaa
 * Return: ezazea
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int k;

va_start(args, n);

for (k = 0; k < n; k++)
{
printf("%d", va_arg(args, int));

if (separator && k < n - 1)
printf("%s", separator);
}
printf("\n");

va_end(args);
}

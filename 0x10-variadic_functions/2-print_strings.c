#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - eza
 * @separator: eza
 * @n: eza
 * @..: eaaze
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int k;
char *strr;

va_start(args, n);

for (k = 0; k < n; k++)
{
strr = va_arg(args, char *);

if (strr)
printf("%s", strr);
else
printf("(nil)");

if (separator && k < n - 1)
printf("%s", separator);
}
va_end(args);

printf("\n");
}

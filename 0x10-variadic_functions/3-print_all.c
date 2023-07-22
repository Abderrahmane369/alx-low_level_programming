#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * print_all -eza
 * @format: ezae
 * @...: ezaea
 */

void print_all(const char * const format, ...)
{
va_list args;

int k = 0;
char *s;
int sep = 0;

va_start(args, format);

while (format[k])
{
switch (format[k])
{
case 'c':
printf("%s%c", (sep) ? " ," : "",va_arg(args, int));
sep = 1;

break;
case 'i':
printf("%s%d", (sep) ? " ," : "",va_arg(args, int));
sep = 1;

break;
case 'f':
printf("%s%f", (sep) ? " ," : "",va_arg(args, double));
sep = 1;

break;
case 's':
s = va_arg(args, char*);

if (s)
printf("%s%s", (sep) ? " ," : "", s);
else
printf("%s%s", (sep) ? " ," : "", "(nil)");

sep = 1;
}

k++;
}

printf("\n");

va_end(args);
}

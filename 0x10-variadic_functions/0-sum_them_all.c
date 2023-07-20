#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - eza
 * @n: eaz
 * @...: zeaea
 * Return: to home
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int k;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (k = 0; k < n; k++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}

#include "function_pointers.h"

/**
 * print_name - eazea
 * @name: aeza
 * @f: eza
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

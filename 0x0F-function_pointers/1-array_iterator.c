#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - opopp
 * @array: eaze
 * @size: ezaea
 * @action: eza
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t k;

	if (array && action)
	{

		for (k = 0; k < size; k++)
		{
			action(array[k]);
		}
	}
}


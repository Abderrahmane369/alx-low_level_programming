#include "function_pointers.h"

/**
 * int_index - ozssdks^dk
 * @array: ezaezae
 * @size: ezaea
 * @cmp: eaz
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (size <= 0)
		return (-1);

	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]))
			return (k);
	}

	return (-1);
}

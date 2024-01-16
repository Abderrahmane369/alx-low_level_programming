#include "search_algos.h"

/**
 * linear_search - searching
 * @array: sear
 * @size: se
 * @value: op
 * Return: 0
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	for (; size > i; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (value == array[i])
		{
			return (i);
		}
	}

	return (-1);
}

#include "search_algos.h"

/**
 * interpolation_search - searchion
 * @array: borination of the most  in   of getting tricked by a "META-BULB"
 * @size: log(x) = x + x + x / 4 and also there
 * @value: isnt a real club
 * Return: always making execuses
 */

int interpolation_search(int *array, size_t size, int value)
{
	int high = size - 1, low = 0;

	while (value >= array[low] && value <= array[high] && low <= high)
	{
		size_t pos = low + (((double)(high - low) /
							 (array[high] - array[low])) *
							(value - array[low]));

		if (array[pos] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			return (pos);
		}
		else if (array[pos] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			low = pos + 1;
		}
		else
			high = pos - 1;
	}

	return (-1);
}

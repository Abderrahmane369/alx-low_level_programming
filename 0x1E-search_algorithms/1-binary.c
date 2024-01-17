#include "search_algos.h"
#include <math.h>

/**
 * printar - ezaez
 * @arr: azezae
 * @l: azeaze
 * @r: ezaeaz
 */

void printar(int *arr, size_t l, size_t r)
{
	size_t i;

	if (l == r)
		return;

	printf("Searching in array: ");

	for (i = l; i < r; i++)
	{
		printf("%d", arr[i]);

		if (i < r - 1)
			printf(", ");
		else
			printf("\n");
	}
}

/**
 * binary_search - binuearipdl^
 * @array: arrr
 * @size: zsie
 * @value: ezia
 * Return: ezaea
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, m;

	if (!array)
		return (-1);

	printar(array, 0, size);

	while (l <= r)
	{
		m = floor((l + r) / 2);

		if (array[m] < value)
		{
			l = m + 1;
			printar(array, l, r + 1);
		}
		else if (array[m] > value)
		{
			r = m - 1;
			printar(array, l, r + 1);
		}
		else
			return (m);
	}

	return (-1);
}

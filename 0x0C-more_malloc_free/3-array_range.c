#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * array_range - eazeaeaze
 * @min: ezae
 * @max: ezaea
 * Return: ezae
 */
int *array_range(int min, int max)
{
	int *arr;
	int k;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (k = min; k <= max; k++)
	{
		arr[k - min] = k;
	}

	return (arr);
}

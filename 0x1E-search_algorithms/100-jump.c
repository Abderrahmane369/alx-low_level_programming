#include "search_algos.h"
#include <math.h>

#define MIN(a, b) (((a) < (b)) ? (a) : (b))

/**
 * jump_search - search
 * @array: zaeaz
 * @size: zaes7
 * @value: eazazea
 * Return: ezaeae
 */

int jump_search(int *array, size_t size, int value)
{
    size_t a = 0, b = sqrt(size);

    if (!array)
        return (-1);

    while (array[MIN(b, size) - 1] < value)
    {
        a = b;
        b += sqrt(size);

        printf("Value checked array[%ld] = [%d]\n", a, array[a]);

        if (a >= size)
        {
            return (-1);
        }
    }

    printf("Value found between indexes [%ld] and [%ld]\n", a - b, a);

    printf("%ld / %ld \n", a, b);

    while (array[a] < value)
    {
        a++;

        printf("Value checked array[%ld] = [%d]\n", a, array[a]);

        if (a == MIN(b, size))
            return (-1);
    }

    if (array[a] == value)
        return (a);

    return (-1);
}

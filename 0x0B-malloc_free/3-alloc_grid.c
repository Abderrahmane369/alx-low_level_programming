#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

/**
 * alloc_grid - ea
 * @width: o
 * @height: op
 * Return: sdaez
 */

int **alloc_grid(int width, int height)
{
int k, j;
int **arr;

if (width < 0 || height < 0)
return (NULL);

arr = malloc(sizeof(int *) * height);

if (arr == NULL)
{
free(arr);
return (NULL);
}

for (k = 0; k < height; k++)
{
arr[k] = malloc(sizeof(int) * width);

if (arr[k] == NULL)
{
free(arr[k];
free(arr);
}
return (NULL);
}
}


for (k = 0; k < height; k++)
{
for (j = 0; j < width; j++)
{
arr[k][j] = 0;
}
}

return (arr);
}

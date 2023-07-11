#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

/**
 * str_concat - ea
 * @s1: o
 * @s2: op
 * Return: sdaez
 */

int **alloc_grid(int width, int height)
{
if (width < 0 || height < 0)
return (NULL);

int **arr = malloc(sizeof(int *) * height);

if (arr == NULL)
return (NULL);

for (int k = 0; k < height; k++)
{
arr[k] = malloc(sizeof(int) * width);

if (arr[k] == NULL)
return (NULL);
}

for (int k = 0; k < height; k++)
{
for (int j = 0; j < width; j++)
{
arr[k][j] = 0;
}
}

return (arr);
}

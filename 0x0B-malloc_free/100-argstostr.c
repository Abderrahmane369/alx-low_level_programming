#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * argstostr - aze
 * @ac: eaz
 * @av: eza
 * Return: aze
 */

char *argstostr(int ac, char **av)
{
	    int total_length = 0;
    int i, j;
        int index = 0;
    char *s;
    if (ac == 0 || av == NULL)
        return NULL;

    for (i = 0; i < ac; i++) {
        total_length += strlen(av[i]);
        total_length++;
    }

    s = malloc(sizeof(char) * (total_length + 1));

    if (s == NULL)
        return NULL;

    for (i = 0; i < ac; i++) {
        for (j = 0; av[i][j] != '\0'; j++) {
            s[index++] = av[i][j];
        }
        s[index++] = '\n';
    }

    s[index] = '\0';

    return s;

    return (0);
}

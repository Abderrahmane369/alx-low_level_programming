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
	    if (ac == 0 || av == NULL)
        return NULL;

    int total_length = 0;
    int i, j;

    // Calculate the total length including space for newline characters
    for (i = 0; i < ac; i++) {
        total_length += strlen(av[i]);
        total_length++; // Add space for the newline character
    }

    char *s = malloc(sizeof(char) * (total_length + 1)); // Add 1 for the null terminator

    if (s == NULL)
        return NULL;

    int index = 0;
    for (i = 0; i < ac; i++) {
        for (j = 0; av[i][j] != '\0'; j++) {
            s[index++] = av[i][j];
        }
        s[index++] = '\n'; // Add newline character after each argument
    }

    s[index] = '\0'; // Null-terminate the string

    return s;

    return (0);
}

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
	char *str;
	char *s = "";
	char *n = "\n";
	int k;

	if (ac == 0 || av == NULL)
		return (NULL);
	
	strcpy(s, av[1]);
	for (k = 2; k < ac; k++)
	{
		strcat(s, n);
		strcat(s, av[k]);
	}

	str = malloc(sizeof(char) * strlen(s));

	if (str == NULL)
		return (NULL);

	strcpy(str, s);

	return (str);
}

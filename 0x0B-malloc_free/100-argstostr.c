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
	char *s;
	int k;
	unsigned int len = 0;

	if (ac <= 1 || av == NULL)
		return (NULL);

	for (k = 1; k < ac; k++)
	{
		len += strlen(av[k]);
	}

	s = malloc(sizeof(char) * (len + ac - 1));

	if (s == NULL)
		return (NULL);

	strcpy(s, av[1]);

	for (k = 2; k < ac; k++)
	{
		strcat(s, av[k]);
		s[strlen(av[k])] = '\n';
		s[strlen(av[k+1])] = '\0';
	}

	return (s);


}

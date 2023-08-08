#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - eaz
 * @filename: eza
 * @text_content: zeeza
 * Return: eza
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	char *txt = text_content ? text_content : "";
	
	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	while (*txt)
	{
		if (write(f, txt, 1) == -1)
		{
			close(f);
			return (-1);
		}

		txt++;
	}

	close(f);
	return (1);
}

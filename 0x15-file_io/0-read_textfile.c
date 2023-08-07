#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - eza
 * @filename: eza
 * @letters: eza
 * Return: eza
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char *buff;
	ssize_t rbytes, wbytes;

	if (!filename)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (!buff)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
	{
		free(buff);
		return (0);
	}

	rbytes = read(f, buff, letters);

	if (rbytes == -1)
	{
		close(f);
		free(buff);
		return (0);
	}

	wbytes = write(STDOUT_FILENO, buff, rbytes);

	if (wbytes != rbytes || wbytes == -1)
	{
		close(f);
		free(buff);
		return (0);
	}
	
	close(f);
	free(buff);
	return (rbytes);
}

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - eza
 * @argc: eza
 * @argv: eza
 * Return : eza
 */

int main(int argc, char **argv)
{
	int f, t;
	char *buff;
	ssize_t rbytes, wbytes;

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	f = open(argv[1], O_RDONLY);

	if (f == -1 || !argv[1])
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	t = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);

	if (t == - 1 || !argv[2])
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(f);
		exit(99);
	}

	buff = malloc(1024);

	if (!buff)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file%s\n", argv[1]);
		close(f);
		close(t);
		exit(99);
	}

	rbytes = read(f, buff, 1024);

	if (rbytes == -1)
	{
		free(buff);
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(f);
		close(t);
                exit(98);
	}
	
	wbytes = write(t, buff, rbytes);
	
	if (wbytes == -1 || wbytes != rbytes)
	{
		free(buff);
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(f);
		close(t);
		exit(99);
	}

	if (close(f) == -1)
	{
		free(buff);
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}

	if (close(t) == -1)
	{
		free(buff);
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", t);
		exit(100);
	}

	free(buff);

	return (0);
}

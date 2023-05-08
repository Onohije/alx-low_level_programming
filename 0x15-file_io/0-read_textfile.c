#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: nbw- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t f;
	ssize_t nbw;
	ssize_t nbr;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	nbr = read(f, buffer, letters);
	nbw = write(STDOUT_FILENO, buffer, nbr);

	free(buffer);
	close(f);
	return (nbw);
}

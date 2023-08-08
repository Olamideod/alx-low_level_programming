#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text files and print them to POSIX standand out,
 * @filename: Points the names to the filename,
 * @letters: The nums of letters to the,
 *           function should be read and printed.
 *
 * Return: If function fails or filename is NULL 0.
 *         O/W - The actual num of bytes the function be read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}

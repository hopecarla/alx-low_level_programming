#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Reads a text file print to the POSIX STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read and printed
 * Return:  w- actual number of bytes read and printed
 *          0 when the write function fails or filename is NULL.
 */
 ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file_descriptor;
	ssize_t w;
	ssize_t t;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	t = read(file_descriptor, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(file_descriptor);
	return (w);
}

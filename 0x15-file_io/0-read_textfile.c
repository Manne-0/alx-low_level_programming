#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include <sys/types.h>
/**
 * read_textfile - read a text file
 * @filename: file
 * @letters: number of bytes to be read
 * Return: number of bytes read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t numBytes;

	FILE *file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	buffer = (char *)malloc(letters);

	if (buffer == NULL)
		return (0);

	numBytes = read(fileno(file), buffer, letters);

	if (numBytes == -1)
		return (0);
	write(STDOUT_FILENO, buffer, numBytes);

	fclose(file);
	free(buffer);
	return (numBytes);
}

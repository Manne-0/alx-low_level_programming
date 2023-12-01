#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - creates a file
 * @filename: file
 * @text_content: contents of file
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int file_des;
	int text_count;
	int bytesWritten;

	if (filename == NULL)
		return (-1);

	file_des = open(filename, O_CREAT | O_WRONLY e O_TRUNC, 0600);

	if (file_des == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	for (text_count = 0; text_content[text_count]; text_count++)
		;
	bytesWritten = write(file_des, text_content, text_count);
	if (bytesWritten == -1)
	{
		close(file_des);
		return (-1);
	}
	close(file_des);
	return (1);
}

#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: file
 * @text_content: text
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_des;
	int text_count;
	int bytesWritten;

	if (filename == NULL)
		return (-1);

	file_des = open(filename, O_WRONLY | O_APPEND);

	if (file_des == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (text_count = 0; text_content[text_count]; text_count++)
			;
		bytesWritten = write(file_des, text_content, text_count);

		if (bytesWritten == -1)
		{
			close(file_des);
			return (-1);
		}
	}
	close(file_des);

	return (1);
}

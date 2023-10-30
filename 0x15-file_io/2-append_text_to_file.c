#include "main.h"
/**
 *  append_text_to_file - function that appends text at the end of a file
 *  @filename: pointer to the name of the file.
 *  @text_content: string to add to the end of the file
 *  Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descript, len, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)

		for (len = 0; text_content[len]; len++)

	file_descript = open(filename, O_WRONLY | O_APPEND);
	i = write(file_descript, text_content, len);

	if (file_descript == -1 || i == -1)
		return (-1);
	close(file_descript);
	return (1);
}

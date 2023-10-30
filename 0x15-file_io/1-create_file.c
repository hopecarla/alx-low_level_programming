#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: pointer to the name of the file to create
 * @text_content: pointer to a string to write to the file
 * Return: If the function fails - -1 
 */
int create_file(const char *filename, char *text_content)
{
	int file_descript, i, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)

		for (len = 0; text_content[len]; len++)

	file_descript = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	i = write(file_descript, text_content,len);

	if (file_descript == -1 || i == -1)
		return (-1);

	close(file_descript);
	return (1);
}

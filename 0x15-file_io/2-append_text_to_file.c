#include"main.h"
/**
 * append_text_to_file - appends a text to a file
 *
 * @filename: Name of the file
 * @text_content: Content of the file
 *
 * Return: Success is 1, and if failed is -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, length, fwrite;

	length = 0;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_RDWR | O_APPEND);
	if (fp == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
		{
			length++;
		}
		fwrite = write(fp, text_content, (length));

		if (fwrite == -1)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}

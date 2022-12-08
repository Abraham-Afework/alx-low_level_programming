#include"main.h"
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * read_textfile - function that reads file
 * @filename: the file to be read
 * @letters: the number of letters it should read and print
 * Return: file can not be opened or read, return 0
 * filename is NULL return 0
 * if write fails or does not write the
 * expected amount of bytes, return 0
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, fread, fwrite;
	char *ch;

	if (filename == NULL)
		return (0);
	ch = malloc(sizeof(char) * letters);

	if (ch == NULL)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
	{
		free(ch);
		return (0);
	}
	fread =	read(fp, ch, letters);
	if (fread == -1)
		return (0);

	fwrite = write(STDOUT_FILENO, ch, fread);
	if (fwrite == -1)
	{
		free(ch);
		return (0);
	}
	if (fread != fwrite)
		return (0);
	free(ch);
	close(fp);
	return (fread);
}

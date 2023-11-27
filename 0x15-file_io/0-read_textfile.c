#include "main.h"

/**
 * read_textfile - reads text from a file and ptints it
 * @filename: name of the file
 * @letters: numbers of bytes to read from the file
 * Return: returns the number of bytes read or printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (filename && letters)
	{
		file = open(filename, O_RDONLY);
		if (file != -1)
		{
			bytes = read(file, &buf[0], letters);
			bytes = write(STDOUT_FILENO, &buf[0], bytes);
			close(file);
			return (bytes);
		}
		else
			return (0);
	}
	else
	return (0);
}

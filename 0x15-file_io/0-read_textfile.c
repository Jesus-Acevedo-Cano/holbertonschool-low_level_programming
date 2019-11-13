#include "holberton.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the standard output.
 * @filename: pointer to txt file
 * @letters: size of the txt
 *
 * Return: text
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *mem;
	int doc, red, white;

	if (filename != NULL)
	{
		doc = open(filename, O_RDONLY);
		if (doc == -1)
		{
			return (0);
		}
		mem = malloc(sizeof(char) * letters);
		if (mem == NULL)
		{
			close(doc);
			return (0);
		}
		red = read(doc, mem, letters);
		if (red < 0)
		{
			close(doc);
			free(mem);
			return (0);
		}
		white = write(STDOUT_FILENO, mem, red);
		if (white < 0)
		{
			close(doc);
			free(mem);
			return (0);
		}
		close(doc);
		free(mem);
		return (red);
	}
	return (0);
}

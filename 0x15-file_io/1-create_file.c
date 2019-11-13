#include "holberton.h"

/**
 * create_file - function that create a text file and
 * prints it to the standard output.
 * @filename: pointer to new txt file
 * @text_content: pointer to text to write
 *
 * Return: text
 */

int create_file(const char *filename, char *text_content)
{
	int doc, count;

	if (filename != NULL)
	{
		doc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		if (doc == -1)
		{
			return (-1);
		}
		if (text_content == NULL)
		{
			text_content = "";
		}
		for (count = 0; text_content[count] != '\0'; count++)
		{
		}
		write(doc, text_content, count);
		close(doc);
		return (1);
	}
	return (-1);
}

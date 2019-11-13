#include "holberton.h"

/**
 * append_text_to_file - function that create a text file and appends
 *
 * @filename: pointer to new txt file
 * @text_content: pointer to text to write
 *
 * Return: text
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int doc, count;

	if (filename != NULL)
	{
		doc = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
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

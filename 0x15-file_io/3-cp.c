BB#include "holberton.h"

/**
 * main - main function to copy a file
 * @argc: arguments counter
 * @argv: arguments received
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	char *buffer[1024];
	int first, sec, rd, wr;


	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	first = open(argv[1], O_RDONLY);
	if (first < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	sec = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (sec < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((rd = read(first, buffer, 1024)) > 0)
	{
		wr = write(sec, buffer, rd);
	}
	if (rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (wr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if ((close(first)) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", first);
		exit(100);
	}
	if ((close(sec)) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", sec);
		exit(100);
	}
	return (0);
}

#include "main.h"

/**
  * main - entry point
  * @argc: argument count
  * @argv: arguement string
  * Return: a string of text
  */

int main(int argc, char *argv[])
{
	int file_from, file_to, rd, clf, clt;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((rd = read(file_from, buff, 1024)) > 0)
	{
		if (file_to == -1 || (write(file_to, buff, rd) != rd))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
			exit(99);
		}
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
	}
	clf = close(file_from);
	if (clf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", clf);
		exit(100);
	}
	clt = close(file_to);
	if (clt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", clt);
		exit(100);
	}
	return (0);
}

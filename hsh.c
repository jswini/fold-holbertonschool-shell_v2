#include "hsh.h"

/**
 * main - The start of the shell including infinite loop
 *
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * @env: user environment at program start 
 * Return: 0
 */

int main(int argc, char *argv[], char **env)
{

	int interactive = isatty(STDIN_FILENO);
	size_t bytes;
	char *buffer;

	if (interactive)
	{
		while (1)
		{
			write(1, "$> ", 3);
			if (getline (&buffer, &bytes, stdin) == EOF)
			{
				break;
			}
			printf("%s\n", buffer);
		}
	}
}

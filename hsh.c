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
	size_t bytes = 0;
	char *buffer;
	char **tokenized;
	int i;
	int status;


	if (interactive)
	{
		while (1)
		{
			prompt();
			if (getline(&buffer, &bytes, stdin) == EOF)
				break;

			printf("%s\n", buffer);
			tokenized = tokenizer(buffer);
			/*
			*status = check_built_ins(tokenized)
			*  if (status < 0)
			*  {
			*	perror("error executing command or built in, please try again");
			*  }
			*/

			}
	}
	return (0);
}

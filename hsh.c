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
	env_t *head = NULL;
	
	while (env[i] != NULL)
	{
		add_node_end_env_t(&head, env[i]);
		i++;
	}

	if (interactive)
	{
		while (1)
		{
			prompt();
			if (getline(&buffer, &bytes, stdin) == EOF)
				break;

			printf("%s\n", buffer);
			tokenized = tokenizer(buffer);
			find_command(*tokenized, head);
			/*
			*status = check_built_ins(tokenized)
			*  if (status < 0)
			*  {
			*	perror("error executing command or built in, please try again");
			*  }
			*  else
			*  		find_command
			*/

			}
	}
	return (0);
}

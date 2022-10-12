#include "hsh.h"
/**
 * check_built_ins - checks the input for built-in bash commands
 * @tokenized: array from gettokenized
 * @path: the head of the PATH env variable
 * @head: the head of the env linked list
 * Return: is the status of the presence of a builtin bash command
 */

char *check_built_ins(char **tokenized, path_t *path, env_t *head)
{
	int i;

	for (i = 0; tokenized[i] != NULL; i++)
	{
		if (_strcmp(tokenized[i], "exit"))
		{
			bi_exit(tokenized, path, head);
			return ("exit");
		}
		else if (_strcmp(tokenized[i], "cd"))
		{
			bi_chdir((tokenized[i + 1]), path, head);
			return ("dir changed");
		}
		else if (_strcmp(tokenized[i], "setenv"))
		{
			bi_set_env((tokenized[i + 1]), (tokenized[i + 2]), head);
			return ("env updated");
		}
		else if (_strcmp(tokenized[i], "unsetenv"))
		{
			bi_unset_env((tokenized[i + 1]), head);
			return ("var deleted");
		}
		else if (_strcmp((tokenized[i]), "env"))
		{
			return ("3");
		}
	}
	return ("Not a built in");
}

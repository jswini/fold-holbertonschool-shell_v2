#include "hsh.h"

/**
 * bi_exit - exits the shell
 * @builtin: the head of the env list
 * @var1: void
 * @var2: void
 * Return: Success on success
 */

char *bi_exit(char **line, path_t *path, env_t *head)
{
	(void)(**line);
	free_env_list(&head);
	free_path_list(&path);
	exit(EXIT_SUCCESS);

	return ("Success");
}

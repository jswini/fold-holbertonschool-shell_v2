#include "hsh.h"

/**
 * bi_exit - exits the shell
 * @line: the value of the key val pair
 * @path: head of the PATH's linked list
 * @head: head of the env var linked list
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

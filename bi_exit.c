#include "hsh.h"

/**
 * bi_exit - exits the shell
 * @builtin: the head of the env list
 * @var1: void
 * @var2: void
 * Return: Success on success
 */

char *bi_exit(env_t *builtin, char *var1, char *var2)
{
	(void)(var1);
	(void)(var2);
	env_t *head = builtin;

	free_env_list(&head);
	exit(EXIT_SUCCESS);

	return ("Success");
}

#include "hsh.h"

/**
 * bi_exit - exits the shell
 * @head: the head of the env list 
 * Return Success on success
 */

char *bi_exit(env_t *head)
{
	free_list(*head);
	exit(EXIT_SUCCESS);

	return ("Success");
}

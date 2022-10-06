#include "hsh.h"
/**
 * find_command - finds the command to be executed
 * @tokenized: the tokens from command line
 * @head: the head of the env linked list
 * Return: is void
 */

void find_command(char **tokenized, env_t *head)
{
	int status, i;
	char **output_list;
	char *path, *tok;
	path_t *path_head;

	build_array(*head); /* mallocs env array */
	fill_array(*head); /* populates env array */
	path = find_path(*output_list);

	/* makes PATH a linked list */
	tok = strtok(path, ":");
	for (i = 0 ; tok != NULL ; i++)
	{
		path_llist(&path_head, tok);
		tok = strtok(NULL, ":");
	}

	if (parse_args(tokenized, path_head, head) == "success")
	{
		return (status);
	} /* checks for args, operators, separators */
	else

	/*
	 *separate into chunks based on operator/separator
	 *order chunks into processing order
	 *create pipes and dup2s as needed
	 *send each command/pipe to execute
	*/
	status = execute_command(); /* fork, execve, wait, return here */
	return (status); /* returns to check builtins */
}

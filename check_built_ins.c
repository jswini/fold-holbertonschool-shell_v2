#include "hsh.h"
/**
 * check_built_ins - checks the input for built-in bash commands
 * @tokenized: double pointer to the output of getline()
 * Return: is the status of the presence of a builtin bash command
 */

char check_built_ins(char *line, env_t *head)
{
	int status;
	char *name;

	name = line[0];
	if (name == "setenv")
	{
		status = bi_set_env(head, line[1], line[2]);
		return (status);
	}
	else if (name == "unsetenv")
	{
		status = bi_unset_env(head, line[1]);
		return (status);
	}
	else if (name == "cd")
	{
		status = bi_chdir(head, line[1]);
		return (status);
	}
	
	else if (name == "exit")
	{
		bi_exit(head);
	}
	else
		return (status);  /** returns to hsh.c */
}

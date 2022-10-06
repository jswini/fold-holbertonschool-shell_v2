#include "hsh.h"
/**
 * check_built_ins - checks the input for built-in bash commands
 * @tokenized: double pointer to the output of getline()
 * Return: is the status of the presence of a builtin bash command
 */

int (*check_built_ins(char *name, char **argv))
{
	int status;
	int i;

	built_in_t bi[] = {
		{"exit", &bi_exit},
		{"cd", &bi_chdir},
		{"setenv", &bi_set_env},
		{"unsetenv", bi_unset_env},
		{"env", print_env},
		{NULL, NULL}
	};

	if (name == NULL)
		return (NULL);

	for (i = 0; bi[i].name != NULL; i++)
		if (_strcmp(bi[i].name, name) != 0)
		{
			return (bi[i].func);
		}
	
	return (status);  /** returns to hsh.c */
}

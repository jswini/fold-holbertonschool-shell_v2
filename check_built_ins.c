#include "hsh.h"
/**
 * check_built_ins - checks the input for built-in bash commands
 * @line: array from getline
 * @path_head: the head of the PATH env variable
 * @head: the head of the env linked list
 * Return: is the status of the presence of a builtin bash command
 */

int (*check_built_ins(char *line))(path_t *path_head, env_t *head)
{
/* 	(void)(path_head);
	(void)(head); */
	builtin_t built_in_chooser[] = {
		{"exit", &bi_exit},
		{"cd", &bi_chdir},
		{"setenv", &bi_set_env},
		{"unsetenv", &bi_unset_env},
		{NULL, NULL}
	};
	int i;

	/* if (line == NULL)
	{
		perror("failed to get command");
		return (-1);
	}

	if (_strcmp(line, "env") == 1)
		return (3); */

	for (i = 0; built_in_chooser[i].builtin_name != NULL; i++)
	{
		if (_strcmp(built_in_chooser[i].builtin_name, line))
			return (built_in_chooser[i].func);
	}
}

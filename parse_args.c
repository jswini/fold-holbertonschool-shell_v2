#include "hsh.h"

/**
 * parse_args - parses the command line arguments
 * @tokenized: the tokens from the command line
 * @path_head: the head of the path's linked list
 * @head: the head of the env linked list
 * Return: command line arg
 */

char *parse_args(char **tokenized, path_t *path_head, env_t *head)
{
	int i;
	char *line;
	int line_len;
	char *status;

	line_len = _strlen(line);
	if (line[line_len] + 1 == '\n')
	{
		status = check_built_ins(line, path_head, head);
		return (status);
	}
	return (line);
}

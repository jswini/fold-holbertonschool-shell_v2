#include "hsh.h"

/**
 * bi_unset_env - unsets the env variable
 * @line: key value
 * @head: head of the env var linked list
 * Return: success or failure
 */

char *bi_unset_env(char *line, env_t *head)
{
	env_t *current;
	char *key = line;

	if (head == NULL)
		return (NULL);

	current = head;
	while (current != NULL)
	{
	if (_strcmp(current->key, key))
	{
		delete_env_node(&current, key);
		return ("success");
	}
	else
		return ("not found");
	}
	return ("unused");
}

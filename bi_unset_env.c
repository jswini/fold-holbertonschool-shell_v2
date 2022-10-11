#include "hsh.h"

/**
 * bi_unset_env - unsets the env variable
 * @head: head of the env list
 * @key: key of the key / val pair of the env list
 * @var2: void
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

#include "hsh.h"

/**
 * bi_unset_env - unsets the env variable
 * @head: head of the env list
 * @key: key of the key / val pair of the env list
 * @var2: void
 * Return: success or failure
 */

char *bi_unset_env(env_t *head, char *key, char *var2)
{
	/* int i;
	int len; */
	env_t *current;
	(void)(var2);

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

#include "hsh.h"

/**
 * bi_unset_env - unsets the env variable
 * @head: head of the env list
 * @key: key of the key / val pair of the env list
 * Return: success or failure
 */

char *bi_unset_env(env_t *head, char *key)
{
	int i;
	int len;
	env_t *current;

	if (head == NULL)
		return (NULL);

	current = head;
	while (current != NULL)
	{
	if (_strcmp(current->key, key))
	{
		delete_env_node(current);
		return ("success");
	}
	else
		return ("not found");
}

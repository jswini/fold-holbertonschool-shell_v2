#include "hsh.h"

/**
 * bi_set_env - sets the env variables
 * @head: head of the env list
 * @key: the key of the key val pair linked list of the env
 * @value: the value of the key val pair of the env
 * Return: char*
 */

char *bi_set_env(env_t *head, char *key, char *value)
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
			current->value = value;
		else
		{
			current->key = key;
			current->value = value;
		}
		current = current->next;
		printf("env var %s set to %s\n", current->key, current->value);
		return ("success");
	}
	return ("failure");
}

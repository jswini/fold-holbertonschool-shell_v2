#include "hsh.h"

/**
 * get_pwd - gets the pwd env var
 * @head: head of env var linked list
 * Return: value of pwd
 */

char *get_pwd(env_t *head)
{
	env_t *current_node = head;

	while (current_node != NULL && current_node->next != NULL)
	{
		if (_strcmp(current_node->key, "PWD") == 1)
			return (current_node->value);
	}
	return ("failed to get pwd");
}

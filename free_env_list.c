#include "hsh.h"

/**
 * free_env_list - frees the env linked list
 * @head: head of the env linked list
 * Return: is void 
 */

void free_env_list(env_t **head)
{
	env_t *thisNode = *head;
	env_t *nextNode;

	while (thisNode != NULL)
	{
		nextNode = thisNode->next;
		free(thisNode->key);
		free(thisNode->value);
		free(thisNode);
		thisNode = nextNode;
	}

}

#include "hsh.h"

/**
 * delete_env_node - removed a node from a linked list
 * @head: the head of the env linked list
 * @value: the value of the key/val pair of the env linked list
 * Return: is void
 */
void delete_env_node(env_t **head, char *value)
{
	env_t *current, *to_remove;


	if (*head == NULL)
	{
		return;
	}
	if ((*head)->key == value)
	{
		to_remove = *head;
		*head = (*head)->next;
		free(to_remove);
		return;
	}
	for (current = *head; current->next != NULL; current = current->next)
	{
		if (current->next->key == value)
		{
			to_remove = current->next;
			current->next = current->next->next;
			free(to_remove);
		}
	}
}

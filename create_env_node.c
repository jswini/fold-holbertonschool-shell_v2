#include "hsh.h"

/**
 * add_node_end_env_t - adds a node to the end of a dbl linked list 
 * @head: the head of the linked list
 * @env_line: single line of data from env variables
 * Return: address of the head node of the linked list
 */

env_t *add_node_end_env_t(env_t **head, char *env_line)
{
	env_t *this_node = *head;
	env_t *new_node = NULL;

	new_node = malloc(sizeof(env_t));
	if (new_node == NULL)
	{
		perror("node not created: ");
		return (new_node);
	}	
	new_node->key = get_key(env_line);
	new_node->value = get_value(env_line);
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	this_node = *head;
	while (this_node->next != NULL)
	{
		this_node = this_node->next;
	}
	this_node->next = new_node;
	new_node->prev = this_node;
	return (*head);
}

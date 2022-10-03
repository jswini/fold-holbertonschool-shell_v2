#include "hsh.h"

/**
 * @brief 
 * 
 */

add_node_end_env_t(environment_t **head, char *env_line)
{
	environment_t *this_node = *head;
	environment_t *new_node = NULL;

	new_node = malloc(sizeof(environment_t));
	if (new_node == NULL)
	{
		perror("node not created: ");
		return(NULL);
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
	return(*head);
}

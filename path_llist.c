#include "hsh.h"

/**
 * path_llist - creates a linked list from the PATH env variable
 * @head: head of the PATH's linked list
 * @path: char pointer to the PATH
 * Return: the head of the PATH's linked list
 */
path_t *path_llist(path_t **head, char *path)
{
	path_t *this_node = *head;
	path_t *new_node = NULL;

	new_node = malloc(sizeof(path_t));
	if (new_node == NULL)
	{
		perror("node not created: ");
		return (new_node);
	}
	new_node->file_path = path;
	new_node->next = NULL;

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
	return (*head);
}

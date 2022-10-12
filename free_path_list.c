#include "hsh.h"

/**
 * free_path_list - frees the env linked list
 * @head: head of the env linked list
 * Return: is void
 */

void free_path_list(path_t **head)
{
	path_t *thisNode = *head;
	path_t *nextNode;

	while (thisNode != NULL)
	{
		nextNode = thisNode->next;
		free(thisNode->file_path);
		free(thisNode);
		thisNode = nextNode;
	}

}

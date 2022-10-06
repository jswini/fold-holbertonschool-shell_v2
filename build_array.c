#include "hsh.h"

/**
 * build_env_array - builds an array from the environment variables
 * @head: head of the env list
 * Return: a char* of the new env variables
 */

void build_env_array(env_t *head)
{
	size_t i = 0;
	char **retVal = NULL;

for (i = 0; head != NULL; i++, head = head->next)
{
	retVal = malloc(sizeof(char *) * i);
	return (retVal);
}
}

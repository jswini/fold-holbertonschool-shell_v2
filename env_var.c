#include "hsh.h"

/**
 * @brief 
 * 
 */
char *get_env_list(char *env, flag_info_t *info)
{
	int i;
	environment_t *new_node;

	new_node = malloc(sizeof(environment_t));
	if (new_node == NULL)
	{
		perror("could not allocate new node");
		return ("failure");
	}

	if (env == NULL)
	{
		return (NULL);
	}

	for (i = 0; &env[i] != NULL; i++)
		{
			new_node->s = _strdup(&env[i]);
			new_node->next = new_node;
		}
	for (i = 0; new_node != NULL; i++)
		{
			printf("%s\n", new_node->s);
			new_node = new_node->next;
		}
	return (new_node->s);
}


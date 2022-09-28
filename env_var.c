#include "hsh.h"

/**
 * @brief 
 * 
 */
char *get_env_list(char *env, flag_info_t *info)
{
	int i;
	environment_t *new_node;

	new_node = malloc (sizeof(environment_t));
	if (new_node == NULL)
	{
		perror("could not allocate new node");
		return ("failure");
	}

	if (env == NULL)
	{
		return (NULL);
	}

	*new_node = info->env_head;
	while(new_node != NULL)
	{
		for (i = 0 ; env[i] != '\0' ; i++)
			{
				if (new_node->s[i] != env[i])
				{
					break;
				}
			}
		new_node = new_node->next;
	}	

	for (i = 0 ; new_node != NULL ; i++)
	{
		printf("%s\n", new_node->s);
		new_node = new_node->next;
	}

	

	return (&(new_node->s[i+1]));
}
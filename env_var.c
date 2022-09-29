#include "hsh.h"

/**
 * create_env_list - creates a linked list for env variables
 * @env: enviromnment variables
 * @flag_info_t: struct that stores environment variables
 */
environment_t *create_env_list(char **env, flag_info_t *info)
{
	int i;
	environment_t *new_node, *last_node;
	char *token;

	last_node = info->env_head;
	
	token = strtok(*env, "\n");

	for (i = 0 ; token != NULL ; i++)
	{
		add_node_end(&info->env_head, token);
		token = strtok(NULL, "\n");
	}
	return (info->env_head);

}

environment_t *add_node_end(environment_t **head, const char *str)
{
	environment_t *new_node, *last_node;
	
		new_node = malloc(sizeof(environment_t));
		if (new_node == NULL)
		{
			perror("could not allocate new node");
			return (NULL);
		}

		new_node->s = _strdup(str);
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
			return(new_node);
		}

		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}

		last_node->next = new_node;

	return (new_node);
}


	/**for (i = 0; &env[i] != NULL; i++)
		{
			new_node->s = _strdup(&env[i]);
			new_node->next = new_node;
		}
	*/

void print_env(flag_info_t *info)
{
	int i;
	environment_t *read_node;

	read_node = info->env_head;

	for (i = 0; read_node != NULL; i++)
		{
			printf("%s\n", read_node->s);
			read_node = read_node->next;
		}
}
#include "hsh.h"

/**
 * @brief 
 * 
 */

int main(int argc, char **argv, char **env)
{
/* 	int i;
	for (i = 0; env[i] != NULL; i++)
		printf("%s\n", env[i]); */
	flag_info_t *info;
	info = malloc(sizeof(flag_info_t));
	info->toexit = 0;
	info->line_number = 0;
	create_env_list(env, info);
	print_env(info);
	free(info);

	return (0);
}

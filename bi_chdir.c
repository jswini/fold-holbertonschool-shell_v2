#include "hsh.h"

/**
 * bi_chdir - changes the sctive directory
 * @line: the value of the key val pair
 * @path: the new PWD
 * @head: head of the env var linked list
 * Return: Success on success failure on fail
 */
char *bi_chdir(char *line, path_t *path, env_t *head)
{
	struct stat sb;
	char *oldpwd_val = get_pwd(head);
	char *value = line;
	(void)(path);

	if (lstat(value, &sb) == -1)
		return ("failure");

	bi_set_env("OLDPWD", oldpwd_val, head);
	bi_set_env("PWD", value, head);
	return ("Success");
}

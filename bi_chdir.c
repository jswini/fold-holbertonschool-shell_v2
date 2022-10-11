#include "hsh.h"

/**
 * bi_chdir - changes the sctive directory
 * @head: head of the environment list
 * @value: the new PWD
 * @var2: void
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

	bi_set_env(head, "OLDPWD", oldpwd_val);
	bi_set_env(head, "PWD", value);
	return ("Success");
}

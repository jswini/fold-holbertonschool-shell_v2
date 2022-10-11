#include "hsh.h"

/**
 * bi_chdir - changes the sctive directory
 * @head: head of the environment list
 * @value: the new PWD
 * @var2: void
 * Return: Success on success failure on fail
 */
char *bi_chdir(env_t *head, char *value, char *var2)
{
	struct stat sb;
	char *oldpwd_val = get_pwd(head);
	(void)(var2);

	if (lstat(value, &sb) == -1)
		return ("failure");

	bi_set_env(head, "OLDPWD", oldpwd_val);
	bi_set_env(head, "PWD", value);
	return ("Success");
}

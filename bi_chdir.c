#include "hsh.h"

/**
 * bi_chdir - changes the sctive directory
 * @head: head of the environment list
 * @value: the new PWD
 * Return: Success on success failure on fail
 */
char *bi_chdir(env_t *head, char *value)
{
	struct stat sb;
	char *oldpwd_val = get_pwd(*head);

	if (lstat(value, &sb) == -1)
		return ("failure");

	bi_set_env(head, "OLDPWD", oldpwd_val);
	bi_set_env(head, "PWD", value);
	return ("Success");
}

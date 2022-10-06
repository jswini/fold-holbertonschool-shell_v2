#include "hsh.h"

char *bi_chdir(env_t *head, char *value, char *path)
{
	char *oldpwd_val = get_pwd(*head);

	if (/*strcmp path to value*/)
	bi_set_env(head, "OLDPWD", oldpwd_val);
	bi_set_env(head, "PWD", value);
	return ("Success");
}

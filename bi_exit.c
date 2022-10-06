#include "hsh.h"

char *bi_exit(env_t *head)
{
	free_list(*head);
	exit(EXIT_SUCCESS);
}

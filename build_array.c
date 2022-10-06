#include "hsh.h"

void build_env_array(env_t *head)
{
	size_t i = 0;
	char **retVal = NULL;

for (i = 0; head != NULL; i++, head = head->next);	

	retVal = malloc(sizeof(char *) * i);
	return retVal;
}

#include "hsh.h"

char *find_path(char **output_list)
{
	int i;
	char *path;

	for (i = 0; output_list[i] != NULL; i++)
	{
		if (_strncmp(output_list[i], "PATH", 4))
		{
			path = _strdup(output_list[i]);
		}
		else
		{
			perror("can't find path var");
			return("failed");
		}
	}
	return (path);
}
/*set to linked list to verify before use*/

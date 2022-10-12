#include "hsh.h"

char **create_command(char *filename, path_t *path_llist)
{
	struct stat st;
	path_t  *ptr;
	char *file;

	if (stat(filename, &st) == 0)
		return (filename);
	if (!path_llist)
		return(NULL);
	ptr = path_llist;
	while (ptr->next)
	{
		file = _strcat(ptr->file_path, filename);
		if (stat(file, &st) == 0)
			return (file);
		free(file);
		ptr = ptr->next;
	}
	return (NULL);
}

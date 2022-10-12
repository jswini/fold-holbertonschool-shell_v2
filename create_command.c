#include "hsh.h"

/**
 * create_command - created the command to execute
 * @filename: the file name to be executed
 * @path_llist: linked list made from PATH
 * Return: NULL if NULL or the filename to execute
 */

char *create_command(char *filename, path_t *path_llist)
{
	struct stat st;
	path_t  *ptr;
	char *file;

	if (stat(filename, &st) == 0)
		return (filename);
	if (!path_llist)
		return (NULL);
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

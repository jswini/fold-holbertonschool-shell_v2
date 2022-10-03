#include "hsh.h"

int check_built_ins(char **tokenized)
{
	int status;
	if (_strcmp(tokenized[0], "exit") == 0)
	{
		shell_exit();
	}
	else if (_strcmp(tokenized[0], "cd") == 0)
	{
		change_dir();
	}
	else if (_strcmp(tokenized[0], "setenv") == 0)
	{
		set_env();
	}
	else if (_strcmp(tokenized[0], "unsetenv") == 0)
	{
		unset_env();
	}
	else if (_strcmp(tokenized[0], "env") == 0)
	{
		print_env();
	}
	else
	{
		find_command();
	}
	return (status);  //returns to hsh.c
}

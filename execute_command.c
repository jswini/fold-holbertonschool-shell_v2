#include "hsh.h"

/**
 * execute_command - runs execve on the command name
 * @cmd: the command to be executed
 * @status: the status of the shell
 * Return: the status of the executed command
 */

char *execute_command(char **cmd, char *status)
{
	pid_t check_process;
	int i;

	check_process = fork();
	if (check_process < 0)
	{
		perror("Could not create child process");
		return (status);
	}
	if (check_process == 0)
	{
		for (i = 0; cmd[i] != NULL; i++)
		{
			if (execve(cmd[0], cmd, NULL) == -1)
				perror("Command could not execute");
		}
	}
	else
	{
		wait(&status);
		/* status = WEXITSTATUS(status);*/
		return (status);
	}
	return (status);
}
